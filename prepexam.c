#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

//--------------------------------(LEVEL 1)---------------------------------
// //first_word
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
//     {
//       i++;
//     }
//     while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
//     {
//       write(1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

// //Fizzbuzz
// void mini_putnbr(int nbr)
// {
//   if (nbr > 9)
//     mini_putnbr(nbr / 10);
//   write (1, &"0123456789"[nbr % 10], 1);
// }
// int main()
// {
//   int nbr = 1;
//   while (nbr <= 100)
//   {
//     if (nbr % 3 == 0 && nbr % 5 == 0)
//       write (1, "fizzbuzz", 8);
//     else if (nbr % 3 == 0)
//       write (1, "fizz", 4);
//     else if (nbr % 5 == 0)
//       write (1, "buzz", 4);
//     else
//       mini_putnbr(nbr);
//     write (1, "\n", 1);
//     nbr++;
//   }
  
// }

// //ft_putstr
// void	ft_putstr(char *str)
// {
//   int i = 0;
//   while (str[i] != '\0')
//   {
//     write (1, &str[i], 1);
//     i++;
//   } 
// }

// //ft_strcpy
// char    *ft_strcpy(char *s1, char *s2)
// {
//   int i = 0;
//   while (s2[i] != '\0')
//   {
//     s1[i] = s2[i];
//     i++;
//   }
//   s1[i] =  '\0';
//   return s1;
// }

// //ft_strlen(char *str)
// int	ft_strlen(char *str)
// {
//   int i = 0;
//   while (str[i] != '\0')
//   {
//     i++;
//   }
//   return i;
// }

// //ft_swap
// void	ft_swap(int *a, int *b)
// {
//   int tmp;
//   tmp = *a;
//   *a = *b;
//   *b = tmp;
// }

// //repeat_alpha
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     int j;

//     while (argv[1][i] != '\0')
//     {
//       if (argv[1][i] >= 65 && argv[1][i] <= 90)
//       {
//         j = 0;
//         while (j < argv[1][i] - 64)
//         {
//           write (1, &argv[1][i], 1);
//           j++;
//         }
//       }
//       else if (argv[1][i] >= 97 && argv[1][i] <= 122)
//       {
//         j = 0;
//         while (j < argv[1][i] - 96)
//         {
//           write (1, &argv[1][i], 1);
//           j++;
//         }
//       }
//       else
//         write (1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

// //rev_print
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i] != '\0')
//     {
//       i++;
//     }
//     while (i--)
//     {
//       write(1, &argv[1][i], 1);
//     }
//   }
//   write (1, "\n", 1);
// }

// //Rot_13
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i])
//     {
//       if ((argv[1][i] >= 65 && argv[1][i] <= 77) || (argv[1][i] >= 97 && argv[1][i] <= 109))
//         argv[1][i] = argv[1][i] + 13;
//       else if ((argv[1][i] >= 78 && argv[1][i] <= 90) || (argv[1][i] >= 110 && argv[1][i] <= 122))
//         argv[1][i] = argv[1][i] - 13;
//       write (1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

// //Rotone
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i] != '\0')
//     {
//       if ((argv[1][i] >= 65 && argv[1][i] <= 89) || (argv[1][i] >= 97 && argv[1][i] <= 121))
//         argv[1][i] = argv[1][i] + 1;
//       else if (argv[1][i] == 90 || argv[1][i] == 122)
//         argv[1][i] = argv[1][i] - 25;
//       write (1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

// //search_and_replace
// int main(int argc, char **argv)
// {
//   if (argc == 4)
//   {
//     int i = 0;
//     while (argv[1][i])
//     {
//       if (argv[1][i] == argv[2][0])
//         argv[1][i] = argv[3][0];
//       write (1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

// //ulstr
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i])
//     {
//       if (argv[1][i] >= 65 && argv[1][i] <= 90)
//         argv[1][i] = argv[1][i] + 32;
//       else if (argv[1][i] >= 97 && argv[1][i] <= 122)
//         argv[1][i] = argv[1][i] - 32;
//       write (1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

//----------------------------(LEVEL 2)---------------------------
// //alpha_mirror
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i])
//     {
//       if (argv[1][i] >= 65 && argv[1][i] <= 90)
//         argv[1][i] = 65 - argv[1][i] + 90;
//       else if (argv[1][i] >= 97 && argv[1][i] <= 122)
//         argv[1][i] = 97 - argv[1][i] + 122;
//       write (1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

// //camel_to_snake
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i])
//     {
//       if (argv[1][i] >= 65 && argv[1][i] <= 90)
//         write(1, "_", 1);
//       if (argv[1][i] >= 65 && argv[1][i] <= 90)
//         argv[1][i] += 32;
//       write(1, &argv[1][i], 1);
//       i++;
//     }
//   }
// }

// //do_op
// int main(int argc, char **argv)
// {
//   if (argc == 4)
//   {
//     int i = 0;
//     int result = 0;
//     if (argv[2][i] == '+')
//       result = atoi(argv[1]) + atoi(argv[3]);
//     else if (argv[2][i] == '-')
//       result = atoi(argv[1]) - atoi(argv[3]);
//     else if (argv[2][i] == '*')
//       result = atoi(argv[1]) * atoi(argv[3]);
//     else if (argv[2][i] == '/')
//       result = atoi(argv[1]) / atoi(argv[3]);
//     else if (argv[2][i] == '%')
//       result = atoi(argv[1]) % atoi(argv[3]);
//     printf("%d", result);
//   }
//   write(1, "\n", 1);
// }

// //ft_atoi
// int spacccc(char c)
// {
//   return (c == ' ' || c == '\t' || c == '\n'
//     || c == '\r' || c == '\f' || c == '\v');
// }
// int	ft_atoi(const char *str)
// {
//   int i = 0;
//   int result = 0;
//   int sign = 1;

//   while (str[i] && spacccc(str[i]))
//     i++;
//   if (str[i] == '+' || str[i] == '-')
//   {
//     if (str[i] == '-')
//       sign = -sign;
//     i++;
//   }
//   while (str[i] >= '0' && str[i] <= '9')
//   {
//     result = result * 10 + (str[i] - '0');
//     i++;
//   }
//   return result * sign;
// }

//ft_strcmp
// int    ft_strcmp(char *s1, char *s2)
// {
//   int i = 0;
//   while (s1[i] && s2[1] && s1[i] == s2[i])
//   {
//     i++;
//   }
//   return s1 - s2;
// }

// //ft_strcspn
// size_t	ft_strcspn(const char *s, const char *reject)
// {
//   int i = 0;
//   int j;

//   while (s[i])
//   {
//     j = 0;
//     while (reject[j])
//     {
//       if (s[i] == reject[j])
//         return i;
//       j++;
//     }
//     i++;
//   }
//   return i;
// }

// //ft_strspn
// size_t ft_strspn(const char *s, const char *charset)
// {
//   int i = 0;
//   int j;
  
//   while (s[i])
//   {
//     j = 0;
//     while (charset[j])
//     {
//       if (s[i] == charset[j])
//         break;
//       j++;
//     }
//     if (charset[j] == '\0')
//       return i;
//     i++;
//   }
//   return i;
// }

//ft__strdup
// int lenn(char *str)
// {
//     int i = 0;
//     while (str[i])
//     {
//         i++;
//     }
//     return i;
// }

// char    *ft_strdup(char *src)
// {
//     int i = 0;
//     char *newstr;
//     int j = 0;
//     int len = lenn(src);

//     if (!src)
//         return NULL;
//     newstr = malloc(sizeof(char) * len + 1);
//     if (!newstr)
//         return NULL;
//     while (src[i] != '\0')
//     {
//         newstr[j] = src[i];
//         j++;
//         i++;
//     }
//     newstr[j] = '\0';
//     return newstr;
// }

// //ft_strpbrk
// char	*ft_strpbrk(const char *s1, const char *s2)
// {
//     int i = 0;
//     int j;

//     while (s1[i])
//     {
//         j = 0;
//         while (s2[j])
//         {
//             if (s1[i] == s2[j])
//                 return (char *)&s1[i];
//             j++;
//         }
//         i++;
//     }
//     return NULL;
// }

//ft_strrev
// int lenn(char *str)
// {
//   int i = 0;
//   while (str[i])
//     i++;
//   return i;
// }
// char    *ft_strrev(char *str)
// {
//   int i = 0;
//   int len = lenn(str);
//   char tmp;
//   while (i < len - 1)
//   {
//     tmp = str[i];
//     str[i] = str[len - 1];
//     str[len - 1] = tmp;
//     i++;
//     len--;
//   }
//   return str;
// }

////inter
// int is_in(char *str, char c, int limit)
// {
//   int i = 0;
//   while (i < limit)
//   {
//     if (str[i] == c)
//       return 1;
//     i++;
//   }
//   return 0;
// }
//
// int main(int argc, char **argv)
// {
//   if (argc == 3)
//   {
//     int i = 0;
//     int j;
//
//     while(argv[1][i])
//     {
//       j = 0;
//       if (!is_in(argv[1], argv[1][i], i))
//       while (argv[2][j])
//       {
//         if (argv[1][i] == argv[2][j])
//         {
//            write(1, &argv[1][i], 1);
//           break;
//         }
//         j++;
//       }
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }

////LAST_WORD
//int main(int argc, char **argv)
//{
//  if (argc == 2)
//  {
//    int i = 0;
//    while (argv[1][i] != '\0')
//      i++;
//    i--;
//    while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
//    {
//      i--;
//    }
//    while (i >= 0 && !(argv[1][i] == ' ' || argv[1][i] == '\t'))
//    {
//      i--;
//    }
//    i++;
//    while (argv[1][i] && !(argv[1][i] == ' ' || argv[1][i] == '\t'))
//    {
//      write(1, &argv[1][i], 1);
//      i++;
//    }
//  }
//  write (1, "\n", 1);
//}

////IS_POWER_OF_2
//int	    is_power_of_2(unsigned int n)
//{
//  int i = 1;
//
//  while (i <= n)
//  {
//    if (i == n)
//      return 1;
//    i = i * 2;
//  }
//  return 0;
//}

////MAX
//int		max(int* tab, unsigned int len)
//{
//  int i = 0;
//  int tmp = 0;
//  while (i < len)
//  {
//    if (tab[i] > tmp)
//      tmp = tab[i];
//    i++;
//  }
//  return tmp;
//}

////PRINT_BITS
//void	print_bits(unsigned char octet)
//{
//  unsigned int i = 8;
//  unsigned char bit = 0;
//  while(i--)
//  {
//    bit = (octet >> i & 1) + '0';
//    write(1, &bit, 1);
//  }
//}

////REVERSE_BITS
//unsigned char	reverse_bits(unsigned char octet)
//{
//  unsigned int i = 8;
//  unsigned char bit = 0;
//
//  while(i--)
//  {
//    bit = (bit << 1) | (octet & 1);
//    octet = (octet >> 1);
//  }
//  return bit;
//}

////Wdmatch
//int lenn(char *str)
//{
//    int i = 0;
//    while (str[i])
//        i++;
//    return i;
//}
//
//int main(int argc, char **argv)
//{
//    if (argc == 3)
//    {
//      int i = 0;
//      int j = 0;
//
//      while (argv[1][i] && argv[2][j])
//      {
//        if (argv[1][i] == argv[2][j])
//          i++;
//        j++;
//      }
//      if (i == lenn(argv[1]))
//      {
//        i = 0;
//        while(argv[1][i])
//        {
//          write(1, &argv[1][i], 1);
//          i++;
//        }
//      }
//    }
//    write(1, "\n", 1);
//}

////swap_bits
//unsigned char	swap_bits(unsigned char octet)
//{
//  return ((octet >> 4) | (octet << 4));
//}

////UNION
//int is_in(char *str, char c, int limit)
//{
//  int i = 0;
//  while(i < limit)
//  {
//    if (str[i] == c)
//      return 1;
//    i++;
//  }
//  return 0;
//}
//
//int main(int argc, char **argv)
//{
//  if (argc == 3)
//  {
//    int i = 0;
//    int j = 0;
//
//    while (argv[1][i] && !is_in(argv[1], argv[1][i], i))
//    {
//      write(1, &argv[1][i], 1);
//      i++;
//    }
//    while (argv[2][j])
//    {
//      if (!is_in(argv[2], argv[2][j], j) && !is_in(argv[1], argv[2][j], i))
//      write(1, &argv[2][j], 1);
//      j++;
//    }
//  }
//  write (1, "\n", 1);
//}

//SNAKE_TO_CAMEL
int is_in(char *str, char c, int limit)
{
  int i = 0;
  while(i < limit)
  {
    if (str[i] == c)
      return 1;
    i++;
  }
  return 0;
}

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    int i = 0;
    while (argv[1][i])
    {
      if (argv[1][i] == '_')
        argv[1][i + 1] = argv[1][i + 1] - 32;
      else
        write(1, &argv[1][i], 1);
      i++;
    }
  }
  write (1, "\n", 1);
}
