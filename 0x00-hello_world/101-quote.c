#include <unistd.h>
#include <string.h>
/**
 * main - application entry point
 *
 * Return: return 1 for error
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
char *newLine = "\n";
size_t newLine_len = strlen(newLine);
size_t message_len = strlen(message);
write(2, message, message_len);
write(2, newLine, newLine_len);
return (1);
}
