# CompFlex
About : CompFlex is a custom compiler for CompLang (custom C/C++ like programming language) suitable for RISC-V architectures. 

## Instructions to run :
- Copy the code to be compiled in a file named - code.cpp
- Execute the following commands
```
$ make clean
$ make all
$ make run
```
- The compiled code would be present in - code.tac
- The output(including symbol tables) would be present in - output.txt
- Verdict of the compilation(errors/warnings) would be present in - verdict.txt

For futher translation of Three Address code to Assembly code [VMFlex](https://github.com/nandysoham/VMFlex) which is a custom VM, needs to be used.
  
## Design and Features :
### Handling Attributes efficiently using Data Flattening
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/25d742bf-0755-4d51-9aab-47072779b453)
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/83c0ac1f-1895-42d7-a35b-19949f5d1b8d)
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/e11c4d32-2b30-43bd-a8c2-761c3eeecd4e)
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/273a3afa-aff2-41d6-8994-4bf5dd8e7d7d)

### Memory Allocation
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/314d0c90-c55c-43ef-880b-7f610f2f84c6)

### Lambda Functions
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/75cb2d3a-a4f1-4cba-8405-603768d15625)
![image](https://github.com/harmitsb2122/CompFlex/assets/80470843/ef9804b1-be67-43cd-aee7-212c0961127a)

## Documentation
Please find the links to documentation below:
- [Docs](https://docs.google.com/document/d/1a162MpKgx_Jk4WcJYFeREn-2Uoh0L4hkIjD-kF7uYv4/edit)
- [Video](https://drive.google.com/file/d/1qrmFISet6OyiSnUln5PkFxdPNEJX3PQW/view?usp=sharing)
- [Slides](https://docs.google.com/presentation/d/1fwTZlr9LXr8iuBDrH6RsrLPe3mx7e1B1CtPnbWcvGB0/edit#slide=id.g25e228ba4c1_0_0)

