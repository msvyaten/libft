

#include <stdio.h>  //Для printf
#include <string.h>   //Для memmove

int main (void)
{
   // Исходный массив данных
   unsigned char src[10] = "1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
   memmove (&src[4], &src[3], 3);

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);

   return 0;
}
