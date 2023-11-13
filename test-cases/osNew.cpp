// global.h

int MEMORY_SIZE = 262144; // 1024 * 256
int OS_SIZE = 1024;       // 1024 * 100
int OS_START = 0;
int OS_END = 1024;                // OS_START + OS_SIZE
int STACK_SIZE = 10240;           // 1024 * 10
int STACK_START = 1024;           // OS_END
int STACK_END = 11264;            // STACK_START + STACK_SIZE
int HEAP_SIZE = 51200;            // 1024 * 50
int HEAP_START = 11264;           // STACK_END
int HEAP_END = 576716800;         // HEAP_START + HEAP_SIZE
int IO_DISPLAY_SIZE = 65536;      // 1024 * 64
int IO_DISPLAY_START = 576716800; // HEAP_END
int IO_DISPLAY_END = 576782336;   // IO_DISPLAY_START + IO_DISPLAY_SIZE
int IO_KEYBOARD_SIZE = 1;

int IO_KEYBOARD_START = 576782336; // IO_DISPLAY_END

// seekto=229376 in memory.txt

int IO_KEYBOARD_END = 576782337; // IO_KEYBOARD_START + IO_KEYBOARD_SIZE
int FONTMAP_SIZE = 2048;         // 1024 * 2
int FONTMAP_START = 576782337;   // IO_KEYBOARD_END
int FONTMAP_END = 576784385;     // FONTMAP_START + FONTMAP_SIZE
int TEMP_SIZE = 38912;           // 1024 * 38
int TEMP_START = 576784385;      // FONTMAP_END
int TEMP_END = 576823297;        // TEMP_START + TEMP_SIZE

// Keyboard constants
int KEYBOARD_WAIT_TIME = 5;

// Control codes

int CTRL_CODE_BACKSPACE = 8; // 0x08
int CTRL_CODE_ENTER = 10;    // 0x0A

int CTRL_CODE_CTRL = 17;     // 0x11
int CTRL_CODE_ALT = 18;      // 0x12
int CTRL_CODE_SHIFT = 16;    // 0x10
int CTRL_CODE_CAPSLOCK = 20; // 0x14
int CTRL_CODE_BACKSPACE = 8; // 0x08

int ROW_CHAR_SIZE = 128;
int COLUMN_CHAR_SIZE = 64;
int SCREEN_LOCK = 0; // 0x00
int MUL_CONS = 9;

int max_com_len = 10; // max command length

// current path in the OS
char *path;

char *memory;
char **font_map;

int LINE = 0;   // current line (ROW)
int COLUMN = 0; // current column (COL)

int INT_END_POINT = 46; // 0x2E

int focus_mode = 0;
int focus_mode_col = 0;

// rand_gen.h
// rand_gen.c
int rand_lfsr;
int rand_bit;

int rand_engine = 44257; // 0xACE1u

char **board;
char player = 'X';
char computer = 'O';

// memory.c
int __load_char_as_bits(char c, char *out)
{
  int g, i;
  g = c;
  for (i = 0; i < 8; i++)
  {
    out[i] = (g & 1) + '0';
    g = g >> 1;
  }
  return 1;
}

char mread_char(int addr)
{
  return memory[addr];
}

char mwrite(char c, int addr)
{
  memory[addr] = c;
  return memory[addr];
}

// @brief initialize the memory. just create a memory file filled with zeroes
int minit()
{
  int i;
  for (i = 0; i < MEMORY_SIZE; i++)
  {
    memory[i] = 0;
  }
  return 1;
}

// @brief Initializes keyboard
int keyboard_init()
{
  int start, end, i;
  char c;

  start = IO_KEYBOARD_START;
  end = IO_KEYBOARD_START + IO_KEYBOARD_SIZE;

  c = '\0';

  for (i = start; i < end; i++)
  {

    mwrite(c, i);
  }
}

int keyboard_clear_input()
{
  char c;
  c = 0;
  mwrite(c, IO_KEYBOARD_START);
  return 0;
}

char keyboard_get_input()
{
  char input, f, c;

  input = 0;

  // printf("Keyboard start: %d\n", IO_KEYBOARD_START);

  for (; true;)
  {
    minit();
    f = mread_char(IO_KEYBOARD_START);
    // printf("Keyboard input: %c\n", f);
    if (f != 0)
    {
      input = f;
      c = 0;
      mwrite(c, IO_KEYBOARD_START);
      break;
    }
  }
  return input;
}

int keyboard_get_int()
{
  int ans;
  ans = 0;

  for (; true;)
  {

    char f, c;

    f = mread_char(IO_KEYBOARD_START);
    c = 0;

    mwrite(c, IO_KEYBOARD_START);

    if (f == INT_END_POINT)
    {
      break;
    }
    elif (f != 0)
    {
      if (f >= '0' && f <= '9')
      {
        ans = ans * 10 + (f - '0');
      }
      elif (f == 8) // '\b'
      {
        ans = ans / 10;
      }
      else
      {
        break;
      }
    }
  }

  return ans;
}

int convert_keyinput_to_string(char input, char *out)
{
  if (input == CTRL_CODE_ALT)
  {
    // ENTR
    out[0] = 'E';
    out[1] = 'N';
    out[2] = 'T';
    out[3] = 'R';
  }
  elif (input == CTRL_CODE_ALT)
  {
    // ALT
    out[0] = 'A';
    out[1] = 'L';
    out[2] = 'T';
    out[3] = '\0';
  }
  elif (input == CTRL_CODE_SHIFT)
  {
    // SHFT
    out[0] = 'S';
    out[1] = 'H';
    out[2] = 'F';
    out[3] = 'T';
  }
  else
  {
    out[0] = input;
    out[1] = '\0';
  }
  return 1;
}

char manipulate_input(char c)
{
  return c;
}

int isEscape(char input)
{
  return input == 27; // 0x1B
}

// **************************** UTILITY **************************
// @brief write_char writes a character included in fontmap at the last location
// @note takes care of word wrapping
// @returns 1 if not able to write else 0
int write_char(char c)
{
  // use write and read from mem.c
  if (SCREEN_LOCK == 0)
  {

    if (c == 10) // '\n'
    {
      COLUMN = 0;
      LINE = LINE + 8;
      if (LINE == 8 * COLUMN_CHAR_SIZE)
      {
        LINE = 0;
        COLUMN = 0;

        return 1;
      }

      return 0;
    }
    elif (c == 13) //'\r'
    {
      COLUMN = 0;
      return 0;
    }
    elif (c == 12) //'\f'
    {
      LINE = LINE + 8;
      if (LINE >= 8 * COLUMN_CHAR_SIZE)
      {
        LINE = 0;
        COLUMN = 0;
        return 1;
      }

      return 0;
    }
    elif (c == 9) // '\t'
    {
      COLUMN = COLUMN + 4;
      if (COLUMN >= ROW_CHAR_SIZE)
      {
        COLUMN = 0;
        LINE = LINE + 8;
        if (LINE >= 8 * COLUMN_CHAR_SIZE)
        {
          LINE = 0;
          COLUMN = 0;
          return 1;
        }
      }

      return 0;
    }
    elif (c == CTRL_CODE_BACKSPACE)
    {
      if (COLUMN == 0)
      {
        if (LINE == 0)
        {
          return 0;
        }
        else
        {
          COLUMN = ROW_CHAR_SIZE - 1;
          LINE = LINE - 8;
        }
      }
      else
      {
        COLUMN--;
      }

      int A, i;
      char c;
      A = IO_DISPLAY_START + ROW_CHAR_SIZE * LINE + COLUMN;
      c = 0;
      for (i = 0; i < 8; i++)
      {
        mwrite(c, A + ROW_CHAR_SIZE * i);
      }

      return 0;
    }
    else
    {
      int A, i;
      char font[8];
      for (i = 0; i < 8; i++)
      {
        font[i] = font_map[c][i];
      }

      A = IO_DISPLAY_START + ROW_CHAR_SIZE * LINE + COLUMN; // location of the first character in the line
      for (i = 0; i < 8; i++)
      {
        mwrite(font[i], A + ROW_CHAR_SIZE * i);
      }

      COLUMN++;
      if (COLUMN == ROW_CHAR_SIZE)
      { // if the row is full
        COLUMN = 0;
        LINE = LINE + 8;
        return 0;
      }

      if (LINE == 8 * COLUMN_CHAR_SIZE)
      { // if the screen is full
        LINE = 0;
        COLUMN = 0;

        return 1;
      }

      return 0;
    }
  }
  return 1;
}

int write_char_at(char c, int line, int col)
{
  if (SCREEN_LOCK == 0)
  {

    if (line < 0 || line >= 8 * COLUMN_CHAR_SIZE)
    {
      return 1;
    }
    if (col < 0 || col >= ROW_CHAR_SIZE)
    {
      return 1;
    }

    int A, i;
    char font[8];
    for (i = 0; i < 8; i++)
    {
      font[i] = font_map[c][i];
    }

    A = IO_DISPLAY_START + ROW_CHAR_SIZE * line + col; // location of the first character in the line
    for (i = 0; i < 8; i++)
    {
      mwrite(font[i], A + ROW_CHAR_SIZE * i);
    }

    return 0;
  }

  return 1;
}

// ******************************************************************************

int write_string(char *msg, int len)
{
  int g, i;
  if (SCREEN_LOCK == 0)
  {
    g = 0;
    for (i = 0; i < len; i++)
    {
      g = write_char(msg[i]);

      if (g != 0)
      {
        return g;
      }
    }
    return 0;
  }
}

int write_string_at(char *msg, int len, int line, int col)
{
  int g, i;
  g = 0;
  for (i = 0; i < len; i++)
  {
    g = write_char_at(msg[i], line, col);
    if (g != 0)
    {
      return g;
    }

    col++;
    if (col == ROW_CHAR_SIZE)
    {
      col = 0;
      line = line + 8;
    }

    if (line == 8 * COLUMN_CHAR_SIZE)
    {
      line = 0;
      col = 0;

      return 1;
    }
  }
  return 0;
}

int write_int(int a)
{
  if (SCREEN_LOCK == 0)
  {
    char temp[10];
    int count;
    count = 0;
    for (; a > 0;)
    {
      temp[count++] = (a % 10) + '0';
      a = a / 10;
    }
    int i;
    for (i = count - 1; i >= 0; i--)
    {
      write_char(temp[i]);
    }

    return 0;
  }

  return 1;
}

int set_cursor_pos(int line, int col)
{
  if (line < 0 || line >= 8 * COLUMN_CHAR_SIZE)
  {
    return 1;
  }
  if (col < 0 || col >= ROW_CHAR_SIZE)
  {
    return 1;
  }

  LINE = line;
  COLUMN = col;

  return 0;
}

int get_cursor_pos(int *vals)
{
  vals[0] = LINE;
  vals[1] = COLUMN;
}

int write_string_at_col(char *msg, int len, int line, int col)
{
  if (SCREEN_LOCK == 0)
  {
    if (line >= 8 * COLUMN_CHAR_SIZE)
    {
      return 1;
    }
    if (col >= ROW_CHAR_SIZE || col < 0)
    {
      return 1;
    }

    int g, i;
    g = 0;
    for (i = 0; i < len; i++)
    {
      g = write_char_at(msg[i], line, col);
      if (g != 0)
      {
        return g;
      }

      line = line + 8;

      if (line == 8 * COLUMN_CHAR_SIZE)
      {
        line = 0;
        col = 0;

        return 1;
      }

      if (col == ROW_CHAR_SIZE)
      {
        col = 0;
        line = line + 8;
      }
    }
  }

  return 1;
}

int write_zero_line_at(int line)
{
  if (SCREEN_LOCK == 0)
  {
    if (line < 0 || line >= 8 * COLUMN_CHAR_SIZE)
    {
      return 1;
    }

    int A, i;
    char c;

    A = IO_DISPLAY_START + ROW_CHAR_SIZE * line;
    c = 0;
    for (i = 0; i < ROW_CHAR_SIZE * 8; i++)
    {
      mwrite(c, A + i);
    }

    return 0;
  }

  return 1;
}

int write_zero_line()
{
  if (SCREEN_LOCK == 0)
  {
    int A, i;
    char c;

    A = IO_DISPLAY_START + ROW_CHAR_SIZE * LINE;
    c = 0;
    for (i = 0; i < ROW_CHAR_SIZE * 8; i++)
    {
      mwrite(c, A + i);
    }

    return 0;
  }

  return 1;
}

int write_face(char **font)
{
  if (SCREEN_LOCK == 0)
  {

    LINE = LINE + 8;
    COLUMN = 0;

    int A, i, j;
    A = IO_DISPLAY_START + LINE * ROW_CHAR_SIZE + COLUMN;

    for (i = 0; i < 128; i++)
    {
      for (j = 0; j < 16; j++)
      {
        mwrite(font[i][j], A + i * ROW_CHAR_SIZE + j);
      }
    }

    LINE = LINE + 128;
    COLUMN = 0;

    if (LINE >= 8 * COLUMN_CHAR_SIZE)
    {
      LINE = 0;
      COLUMN = 0;
    }
  }
  return 1;
}

// @brief Shifts the entire display map by one 1 unit upwards
int display_up()
{
  if (SCREEN_LOCK == 0)
  {
    int A, i, j, addr;
    char c;

    A = IO_DISPLAY_START;
    c = 0;
    for (j = 0; j < 8; j++)
    {
      for (addr = 0; addr < IO_DISPLAY_SIZE - ROW_CHAR_SIZE; addr++)
      {
        int temp;
        temp = mread_char(A + addr + ROW_CHAR_SIZE);
        // reverse temp
        int temp2;
        temp2 = 0;

        for (i = 0; i < 8; i++)
        {
          if ((temp >> i) & 1)
          {
            temp2 = temp2 | (1 << (7 - i));
          }
        }
        char temp3;
        temp3 = temp2;
        mwrite(temp3, A + addr);
      }
    }

    // clear the last line (A)
    for (i = 0; i < ROW_CHAR_SIZE * 8; i++)
    {
      mwrite(c, A + i);
    }

    // update the current line
    LINE = LINE - 8;
    if (LINE < 0)
    {
      LINE = 0;
    }

    return 0;
  }

  return 1;
}

// @brief Shifts the entire display map by one 1 unit downwards
int display_down()
{
  if (SCREEN_LOCK == 0)
  {
    int A, i, j, addr;
    char c;

    A = IO_DISPLAY_START;
    c = 0;
    for (j = 0; j < 8; j++)
    {
      for (addr = IO_DISPLAY_SIZE - ROW_CHAR_SIZE; addr >= 0; addr--)
      {
        int temp;
        temp = mread_char(A + addr);
        // reverse temp
        int temp2;
        temp2 = 0;

        for (i = 0; i < 8; i++)
        {
          if ((temp >> i) & 1)
          {
            temp2 = temp2 | (1 << (7 - i));
          }
        }

        char temp3;
        temp3 = temp2;
        mwrite(temp3, A + addr + ROW_CHAR_SIZE);
      }
    }

    // clear the first line (A)
    for (i = 0; i < ROW_CHAR_SIZE * 8; i++)
    {
      mwrite(c, A + i);
    }

    // update the current line
    LINE = LINE + 8;
    if (LINE >= 8 * COLUMN_CHAR_SIZE)
    {
      LINE = 8 * COLUMN_CHAR_SIZE - 1;
    }

    return 0;
  }

  return 1;
}

// reset the entire display
int clear_screen()
{
  if (SCREEN_LOCK == 0)
  {
    int A, i;
    char c;

    A = IO_DISPLAY_START + IO_DISPLAY_SIZE - 1;
    c = 0;
    for (i = A; i >= IO_DISPLAY_START; i--)
    {
      mwrite(c, i);
    }

    LINE = 0;
    COLUMN = 0;
  }
  return 0;
}

// save only the visible content of the display while switching to focus mode
int save_screen()
{
  int A, D, i;
  A = IO_DISPLAY_START;
  D = TEMP_START;

  for (i = 0; i < IO_DISPLAY_SIZE; i++)
  {
    char temp, temp1;
    int temp3;
    temp = mread_char(A + i);
    temp1 = D + i;

    temp3 = temp;
    mwrite(temp1, temp3);
  }
  return 1;
}

// retrieve the saved screen from the memory after exiting focus mode
int retrieve_screen()
{
  int A, D, i;
  A = IO_DISPLAY_START;
  D = TEMP_START;

  for (i = 0; i < IO_DISPLAY_SIZE; i++)
  {
    char temp, temp1;
    int temp3;
    temp = mread_char(D + i);
    temp1 = A + i;

    temp3 = temp;
    mwrite(temp1, temp3);
  }
  return 1;
}

// reset the entire display
int clear_screen()
{
  if (SCREEN_LOCK == 0)
  {
    int A, i;
    char c;

    A = IO_DISPLAY_START + IO_DISPLAY_SIZE - 1;
    c = 0;
    for (i = A; i >= IO_DISPLAY_START; i--)
    {
      mwrite(c, i);
    }

    LINE = 0;
    COLUMN = 0;
  }
  return 1;
}

// commands supported:
// :xx => not supported becoz we need directory structures

// 1. q --> exit focus mode
// 2. w --> save the file
// 3. wq --> save and exit
// 4. x --> save and exit
// 5. i --> insert mode
// 6. v --> visual mode
// 7. r --> read mode

// @brief: display info panel during focus mode (as seen in vim)
// enable vim like functionality
// store all the present content and show vim like functionality

int focus_info_panel()
{
  if (SCREEN_LOCK == 0)
  {
    save_screen();
    clear_screen();
    focus_mode = 1;
    focus_mode_col = 0;

    int command_mode;
    command_mode = 0;

    int visual_mode;
    visual_mode = 1;
    int edit_mode;
    edit_mode = 0;

    for (; true;)
    {
      char input;
      input = keyboard_get_input();
      input = manipulate_input(input);

      if (command_mode == 0)
      {
        if (isEscape(input))
        {
          command_mode = 1;
        }

        if (visual_mode == 1)
        {
          if (input == 'i')
          {
            visual_mode = 0;
            edit_mode = 1;
          }
        }
        elif (edit_mode == 1)
        {
          // non command mode and write to the display edit screen
          char content_to_write[4];
          convert_keyinput_to_string(input, content_to_write);
          int i;
          for (i = 0; i < 4; i++)
          {
            if (content_to_write[i] != '\0')
            {
              write_char(content_to_write[i]);
            }
          }
        }
      }
      // else
      // {
      // qf: exit focus mode
      // qc: exit command mode and return to visual mode
      // w: save the file
      // wq: save and exit focus mode
      // }
    }
  }

  return 1;
}

int set_seed(int seed)
{
  rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
  rand_lfsr = rand_engine;
  return 1;
}

int rand()
{
  rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
  rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

  return rand_lfsr % 100;
}

// 0 easy, 1 mid , 2 hard

int initializeBoard()
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      board[i][j] = 32; // ' '
    }
  }
  return 0;
}

int printBoard()
{
  int i, j;
  char c1, c2, c3, c4, c5;

  c1 = 32;  // ' '
  c4 = 124; // '|'
  c5 = 10;  // '/n'
  write_string("     1 2 3\n", 11);
  for (i = 0; i < 3; i++)
  {
    c3 = 49 + i;
    write_char(c1);
    write_char(c1);
    write_char(c1);
    write_char(c1);
    write_char(c3);
    for (j = 0; j < 3; j++)
    {
      write_char(board[i][j]);
      if (j < 2)
      {
        write_char(c4);
      }
    }
    write_char(c5);
    if (i < 2)
    {
      write_string("     -----\n", 11);
    }
  }
  write_char(c5);
  return 1;
}

int isBoardFull()
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (board[i][j] == 32) // ' '
      {
        return 0;
      }
    }
  }
  return 1;
}

int isGameOver(char player)
{
  int i;
  for (i = 0; i < 3; i++)
  {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
    {
      return 1;
    }
    if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
    {
      return 1;
    }
  }
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
  {
    return 1;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
  {
    return 1;
  }
  return 0;
}

int makeMove(int row, int col, char player)
{
  if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != 32)
  {
    return 0;
  }
  board[row][col] = player;
  return 1;
}

int computerMove_easy()
{
  int row, col;

  row = rand() % 3;
  col = rand() % 3;
  for (; (makeMove(row, col, computer) == 0);)
  {
    row = rand() % 3;
    col = rand() % 3;
  }
  return 1;
}

int minimax(char **board, int depth, int isMaximizing)
{
  char result;
  if (isGameOver(computer) == 1)
  {
    result = 1;
  }
  elif (isGameOver(player) == 1)
  {
    result = -1;
  }
  elif (isBoardFull() == 1)
  {
    result = 0;
  }
  else
  {
    result = 2;
  }

  if (result != 2)
  {
    return result;
  }

  int bestScore;
  char currentPlayer;

  if (isMaximizing)
  {
    bestScore = -1000;
    currentPlayer = computer;
  }
  else
  {
    bestScore = 1000;
    currentPlayer = player;
  }

  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (board[i][j] == 32) // ' '
      {
        board[i][j] = currentPlayer;
        int score;
        score = minimax(board, depth + 1, 1 - isMaximizing);
        board[i][j] = 32; // ' '
        if (isMaximizing == 1)
        {
          if (score > bestScore)
          {
            bestScore = score;
          }
        }
        else
        {
          if (score < bestScore)
          {
            bestScore = score;
          }
        }
      }
    }
  }

  return bestScore;
}

int computerMove_hard()
{
  int bestScore, bestMove[2], i, j;
  bestScore = -1000;
  bestMove[0] = -1;
  bestMove[1] = -1;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (board[i][j] == 32) // ' '
      {
        board[i][j] = computer;
        int score;
        score = minimax(board, 0, 0);
        board[i][j] = 32; //' '
        if (score > bestScore)
        {
          bestScore = score;
          bestMove[0] = i;
          bestMove[1] = j;
        }
      }
    }
  }

  makeMove(bestMove[0], bestMove[1], computer);
  return 1;
}

int computerMove_med()
{
  int i, j;
  // Check for a win or block the player from winning
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (board[i][j] == 32)
      {
        board[i][j] = computer;
        if (isGameOver(computer) == 1)
        {
          return 1; // Computer wins
        }
        board[i][j] = 32; // Undo the move
      }
    }
  }

  // Try to take the center if it's available
  if (board[1][1] == 32)
  {
    board[1][1] = computer;
    return 0; // No win yet
  }

  // Try to take a corner
  int corners[4][2];
  // {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
  corners[0][0] = 0;
  corners[0][1] = 0;

  corners[1][0] = 0;
  corners[1][1] = 2;

  corners[2][0] = 2;
  corners[2][1] = 0;

  corners[3][0] = 2;
  corners[3][1] = 2;

  for (i = 0; i < 4; i++)
  {
    int row;
    row = corners[i][0];
    int col;
    col = corners[i][1];
    if (board[row][col] == 32)
    {
      board[row][col] = computer;
      return 0; // No win yet
    }
  }

  // Take any available edge
  int edges[4][2];
  // {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
  edges[0][0] = 0;
  edges[0][1] = 1;

  edges[1][0] = 1;
  edges[1][1] = 0;

  edges[2][0] = 1;
  edges[2][1] = 2;

  edges[3][0] = 2;
  edges[3][1] = 1;

  for (i = 0; i < 4; i++)
  {
    int row;
    row = edges[i][0];
    int col;
    col = edges[i][1];
    if (board[row][col] == 32)
    {
      board[row][col] = computer;
      return 0; // No win yet
    }
  }

  return 0; // No moves left (shouldn't reach this point)
}

int tic_tac_toe(int game_diff)
{
  set_seed(1);
  initializeBoard();

  for (; true;)
  {
    clear_screen();
    write_string("Welcome to Tic-Tac-Toe!\n\n", 25);

    if (game_diff == 0)
    {
      write_string("Easy Mode\n\n", 11);
    }
    elif (game_diff == 1)
    {
      write_string("Medium Mode\n\n", 13);
    }
    else
    {
      write_string("Hard Mode\n\n", 11);
    }

    printBoard();
    int row, col;

    write_string("Enter your move (row and column, e.g., 1 enter 2 enter): \n", 58);
    row = keyboard_get_input();
    col = keyboard_get_input();

    row = row - 48;
    col = col - 48;

    row--; // Adjust for 0-based indexing
    col--;

    if (makeMove(row, col, player) == 0)
    {
      write_string("Invalid move! Try again.\n", 25);
      continue;
    }

    if (isGameOver(player) == 1)
    {
      printBoard();
      write_string("Congratulations! You win!\n", 26);
      break;
    }

    if (isBoardFull() == 1)
    {
      printBoard();
      write_string("It's a draw!\n", 13);
      break;
    }

    if (game_diff == 0)
    {
      computerMove_easy();
    }
    elif (game_diff == 1)
    {
      computerMove_med();
    }
    else
    {
      computerMove_hard();
    }

    if (isGameOver(computer) == 1)
    {
      printBoard();
      write_string("Computer wins! You lose.\n", 25);
      break;
    }

    if (isBoardFull() == 1)
    {
      printBoard();
      write_string("It's a draw!\n", 13);
      break;
    }
  }

  return 0;
}

int os_start()
{
  // initialize the kernel
  minit();
  return 1;
}

int display_1()
{
  write_string("This content is shown from inside the screen\n", 45);
  // write_face(font_0);
  write_string("\n\n", 2);

  write_string("Functionality of the Display:\n", 30);
  write_string("1. Write a string\n", 18);
  write_string("2. Write a character\n", 21);
  write_string("3. Write a face\n", 16);
  write_string("4. Write a string at a given position\n", 38);
  write_string("5. Write a character at a given position\n", 41);
  write_string("6. Set cursor position\n", 23);
  write_string("7. Get cursor position\n", 23);
  write_string("8. Clear screen\n", 16);
  write_string("9. Clear line\n", 14);
  write_string("10. Print New Line\n", 19);
  write_string("11. Print Tab\n", 14);
  write_string("12. Support Backspace\n", 22);
  write_string("13. Print Form Feed\n", 20);
  write_string("14. Print Carriage Return\n", 26);
  write_string("15. Print Integer\n", 18);

  write_string("\n\n", 2);
  write_string("The End\n", 8);
  return 1;
}

int initial_display()
{
  write_string("Welcome to Flex OS\n\n", 20);
  write_string("Press 'c' to clear screen\n\n", 27);
  write_string("Press 'd' to display some example content\n\n", 43);
  write_string("Press 'e' to play tic tac toe with the computer (easy)\n\n", 56);
  write_string("Press 'm' to play tic tac toe with the computer (medium)\n\n", 58);
  write_string("Press 'h' to play tic tac toe with the computer (hard)\n\n", 56);
  write_string("Press 't' to return back to terminal\n\n", 38);
  write_string("Press 'r' to get random numbers\n\n", 33);
  write_string("Press 'i' to get integer input\n\n", 32);
  write_string("Press 'q' to exit terminal\n", 27);
  return 1;
}

int int_input()
{
  clear_screen();
  keyboard_clear_input();

  write_string("Enter an integer: \n", 19);
  int input;
  char c;

  c = 10; // '\n'
  input = keyboard_get_int();
  write_string("The integer is: ", 16);
  write_int(input);
  write_char(c);
}

// function to capture data from memory and update the display
int terminal()
{
  // init_memory();
  clear_screen();
  initial_display();
  int isn;
  isn = 0;

  for (; true;)
  {
    // get input from keyboard
    char input;
    input = keyboard_get_input();

    if (input == 'c')
    {
      clear_screen();
      isn = 0;
    }
    elif (input == 'd')
    {
      display_1();
      isn = 0;
    }
    elif (input == 'q')
    {
      clear_screen();
      write_string("Exiting Terminal\n", 17);
      break;
    }
    elif (input == 'e')
    {
      tic_tac_toe(0);
      isn = 0;
    }
    elif (input == 'm')
    {
      tic_tac_toe(1);
      isn = 0;
    }
    elif (input == 'h')
    {
      tic_tac_toe(2);
      isn = 0;
    }
    elif (input == 'i')
    {
      int_input();
    }
    elif (input == 't')
    {
      clear_screen();
      initial_display();
      isn = 0;
    }
    elif (input == 'r')
    {
      int seed, count, i;
      char c1, c2, c3;

      seed = 0;
      count = 0;
      c1 = 10; // '\n'
      c2 = 32; // ' '
      c3 = 58; // ':'

      write_string("Enter the seed for the random number generator: \n", 49);
      seed = keyboard_get_int();
      write_string("Enter the count of random numbers you want: \n", 45);
      count = keyboard_get_int();

      write_string("The random numbers are: \n\n", 26);
      set_seed(seed);

      for (i = 0; i < count; i++)
      {
        int random;
        random = rand();
        write_char(c2);
        write_int(i + 1);
        write_char(c2);
        write_char(c3);
        write_char(c2);
        write_int(random);
        write_char(c1);
      }
    }
    else
    {
      if (isn == 0)
      {
        isn = 1;
        write_string("\nCharacter printing\n", 20);
      }
      write_char(input);
    }
  }
  return 1;
}

int display_test()
{
  char c1, c2, c3, c4;
  c1 = 10; // '\n'
  c2 = 13; // '\r'
  c3 = 9;  // '\t'
  c4 = CTRL_CODE_BACKSPACE;

  clear_screen();
  write_string("Team RISC V1\n\n\n", 16);
  write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

  set_cursor_pos(32, 0);
  write_char(c1);
  write_string("Namo 2024!\n\n", 12);
  write_string("India lifts the World Cup after 28 years!", 42);

  int val[2];

  write_char(c1);
  // write_face(font_2);

  get_cursor_pos(val);

  int line, col;
  line = val[0];
  col = val[1];

  write_string_at("Hindu", 5, line - 104, col + 20);
  write_string_at_col("Bharat", 6, line - 112, col + 35);

  get_cursor_pos(val);
  line = val[0];

  set_cursor_pos(line - 8, 0);

  // write_char('\n');
  // write_face(font_0);
  // write_char('\n');
  // write_face(font_1);
  // write_char('\n');

  write_string("Kakkos: \f", 9);
  get_cursor_pos(val);
  line = val[0];
  write_char(c2);
  write_zero_line();
  write_string("CS 342", 6);
  write_char(c4);

  write_char(c3);
  write_string("After Tab", 9);
  return 1;
}

int main()
{
  int i;

  path = malloc(sizeof(char) * 128);
  memory = malloc(sizeof(char) * MEMORY_SIZE);
  font_map = malloc(sizeof(*) * 128);
  for (i = 0; i < 128; i++)
  {
    font_map[i] = malloc(sizeof(char) * 8);
  }

  board = malloc(sizeof(*) * 3);
  for (i = 0; i < 3; i++)
  {
    board[i] = malloc(sizeof(char) * 3);
  }

  // U+0000 (nul)
  font_map[0][0] = 0;
  font_map[0][1] = 0;
  font_map[0][2] = 0;
  font_map[0][3] = 0;
  font_map[0][4] = 0;
  font_map[0][5] = 0;
  font_map[0][6] = 0;
  font_map[0][7] = 0;

  // U+0001
  font_map[1][0] = 0;
  font_map[1][1] = 0;
  font_map[1][2] = 0;
  font_map[1][3] = 0;
  font_map[1][4] = 0;
  font_map[1][5] = 0;
  font_map[1][6] = 0;
  font_map[1][7] = 0;

  // U+0002
  font_map[2][0] = 0;
  font_map[2][1] = 0;
  font_map[2][2] = 0;
  font_map[2][3] = 0;
  font_map[2][4] = 0;
  font_map[2][5] = 0;
  font_map[2][6] = 0;
  font_map[2][7] = 0;

  // U+0003
  font_map[3][0] = 0;
  font_map[3][1] = 0;
  font_map[3][2] = 0;
  font_map[3][3] = 0;
  font_map[3][4] = 0;
  font_map[3][5] = 0;
  font_map[3][6] = 0;
  font_map[3][7] = 0;

  // U+0004
  font_map[4][0] = 0;
  font_map[4][1] = 0;
  font_map[4][2] = 0;
  font_map[4][3] = 0;
  font_map[4][4] = 0;
  font_map[4][5] = 0;
  font_map[4][6] = 0;
  font_map[4][7] = 0;

  // U+0005
  font_map[5][0] = 0;
  font_map[5][1] = 0;
  font_map[5][2] = 0;
  font_map[5][3] = 0;
  font_map[5][4] = 0;
  font_map[5][5] = 0;
  font_map[5][6] = 0;
  font_map[5][7] = 0;

  return 0;
}