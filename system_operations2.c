#include<stdio.h>
#include<stdlib.h>

void shutdown()
{
    system("c:\\windows\\system32\\shutdown /s");
}
void shutdowninstant()
{
    system("c:\\windows\\system32\\shutdown /p");
}
void restart()
{
    system("c:\\windows\\system32\\shutdown /r");
}
void logoff()
{
    system("c:\\windows\\system32\\shutdown /l");
}