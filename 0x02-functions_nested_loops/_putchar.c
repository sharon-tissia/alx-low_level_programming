#include "main.h"                                                                                                          
#include <unistd.h>                                                                                                             
/**                                                                                                                             
 * _putchar -writes stdout characters in c
 * 
 * Return: 1 on success
 * on error, -1 is returned with error number displayed
 */                                                                                                                             

int _putchar(char c)                                                                                                            

{ 
	return (write(1, &c, 1));                                                                                                
}
