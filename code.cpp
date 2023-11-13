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

char *memory;

// memory.c
int __load_char_as_bits(char c, char *out)
{
  int g, i;
  g = c;
  for (i = 0; i < 8; i++)
  {
    out[i] = g & 1 + '0';
    g = g << 1;
  }
  return 1;
}

int main()
{
  memory = malloc(sizeof(char) * MEMORY_SIZE);
  return 0;
}