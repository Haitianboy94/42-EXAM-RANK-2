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
//   return s1[i] - s2[i];
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
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     int i = 0;
//     while (argv[1][i])
//     {
//       if (argv[1][i] == '_')
//         argv[1][i + 1] = argv[1][i + 1] - 32;
//       else
//         write(1, &argv[1][i], 1);
//       i++;
//     }
//   }
//   write (1, "\n", 1);
// }
//------------------------------------------------(LEVEL 3)--------------------------------------------------
////ADD_PRIME_SUM
//int ft_is_space(char c)
//{
//  return ((c >= 9 && c <= 13) || c == ' ');
//}
//
//int ft_atoi(char *str)
//{
//  int i = 0;
//  int result = 0;
//  int sign = 1;
//
//  while (str[i] && ft_is_space(str[i]))
//    i++;
//  if (str[i] == '+' || str[i] == '-')
//  {
//    if (str[i] == '-')
//      sign = - sign;
//    i++;
//  }
//  while (str[i] >= '0' && str[i] <= '9')
//  {
//    result = result * 10 + (str[i] - '0');
//    i++;
//  }
//  return result * sign;
//}
//
//int ft_is_prime(int nbr)
//{
//  if (nbr == 2)
//    return 1;
//  if (nbr % 2 == 0 || nbr < 2)
//    return 0;
//  int i = 3;
//  while (i <= nbr / 2)
//  {
//    if (nbr % i == 0)
//      return 0;
//    i++;
//  }
//  return 1;
//}
//
//void ft_putchar(char c)
//{
//  write (1, &c, 1);
//}
//
//void ft_putnbr(int nbr)
//{
//  if (nbr == -2147483648)
//  {
//    write (1, "-2147483648", 11);
//    return;
//  }
//  if (nbr < 0)
//  {
//    ft_putchar('-');
//    nbr = - nbr;
//  }
//  if (nbr > 9)
//    ft_putnbr(nbr / 10);
//  ft_putchar(nbr % 10 + '0');
//}
//
//int main(int argc, char **argv)
//{
//  if (argc != 2 || ft_atoi(argv[1]) < 1)
//  {
//    write (1, "0\n", 2);
//    return 0;
//  }
//  int number = ft_atoi(argv[1]);
//  int sum = 0;
//  while (number > 1)
//  {
//    if (ft_is_prime(number))
//      sum = sum + number;
//    number--;
//  }
//  ft_putnbr(sum);
//  write (1, "\n", 1);
//}

////EPUR_STR
//int main(int argc, char **argv)
//{
//  int i = 0;
//  if (argc != 2 || argv[1][i] == '\0')
//  {
//    write (1, "\n", 1);
//    return 0;
//  }
//  while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
//    i++;
//  while (argv[1][i])
//  {
//    while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
//    {
//      write (1, &argv[1][i], 1);
//      i++;
//    }
//    while (argv[1][i] == ' ' || argv[1][i] == '\t')
//      i++;
//    if (argv[1][i])
//      write (1, " ", 1);
//  }
//  write (1, "\n", 1);
//}

////EXPAND_STR
//int main(int argc, char **argv)
//{
//  int i = 0;
//  if (argc != 2 || argv[1][i] == '\0')
//  {
//    write(1, "\n", 1);
//    return 0;
//  }
//  while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
//    i++;
//  while (argv[1][i])
//  {
//    while (argv[1][i] != ' ' && argv[1][i] != '\t')
//    {
//      write (1, &argv[1][i], 1);
//      i++;
//    }
//    while(argv[1][i] == ' ' || argv[1][i] == '\t')
//      i++;
//    if(argv[1][i])
//      write(1, "   ", 3);
//  }
//  write (1, "\n", 1);
//}

////FT_ATOI_BASE
// int basee(char c)
// {
//   if (c >= '0' && c<= '9')
//     return (c - '0');
//   else if (c >= 'a' && c <= 'f')
//       return (c - 'a' + 10);
//   else if (c >= 'A' && c <= 'F')
//       return (c - 'A' + 10);
//   return -1;
// }
//
// int	ft_atoi_base(const char *str, int str_base)
// {
//   int i = 0;
//   int sign = 1;
//   int result = 0;
//   int val;
//
//   while (str[1] && (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
//     i++;
//   if (str[i] == '+' || str[i] == '-')
//   {
//     if (str[i] == '-')
//       sign = - sign;
//     i++;
//   }
//   while (str[i])
//   {
//     val = basee(str[i]);
//     if (val < 0 || val >= str_base)
//       break;
//     result = result * str_base + val;
//     i++;
//   }
//   return result * sign;
// }

////LST_SIZE
//typedef struct    s_list
//{
//    struct s_list *next;
//    void          *data;
//}                 t_list;
//
//int	ft_list_size(t_list *begin_list)
//{
//  int i = 0;
//  while (begin_list -> next)
//  {
//    begin_list = begin_list -> next;
//    i++;
//  }
//  return i;
//}

//FT_RANGE
// int     *ft_range(int start, int end)
// {
//   int *fill;
//   int len;
//   int i = 0;
//
//   if (start > end)
//     len = start - end;
//   else if (start < end)
//       len = end - start;
//
//   fill = malloc(sizeof(int) * len);
//   while (start <= end)
//   {
//     fill[i] = start;
//     i++;
//     start++;
//   }
//   return fill;
// }
//
// int main()
// {
//   int *res = ft_range(9, 13);
//   int i = 0;
//   while (i < 5)
//   {
//     printf("%d ", res[i]);
//     i++;
//   }
// }

////ft_rrange
// int     *ft_rrange(int start, int end)
// {
//   int len;
//   int i = 0;
//
//   if ((end - start) < 0)
// 	  len = ((end - start) * -1) + 1;
//   else
// 	  len = (end - start) + 1;
//
//   int *fill = malloc(sizeof(int) * len);
//   while(start <= end)
//   {
//     fill[i] = end;
//     i++;
//     end--;
//   }
//   return fill;
// }

////hidenp
//int ft_strlen(char *str)
//{
//  int i = 0;
//
//  while (str[i])
//    i++;
//  return i;
//}
//
// int main(int argc, char **argv)
// {
//   if (argc == 3)
//   {
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     while (argv[1][i])
//     {
//       while(argv[2][j])
//       {
//         if (argv[1][i] == argv[2][j])
//         {
//           count = count + 1;
//           break;
//         }
//         j++;
//       }
//       i++;
//     }
//     if (count == ft_strlen(argv[1]))
//       write(1, "1\n", 2);
//     else
//       write(1, "0\n", 2);
//   }
//   write(1, "\n", 1);
// }

////LCM
// unsigned int    lcm(unsigned int a, unsigned int b)
// {
//   unsigned int res;
//   if (a > b)
//     res = a;
//   else
//     res = b;
//   if (a == 0 || b == 0)
//     return 0;
//
//   while (1)
//   {
//     if ((res % a == 0) && (res % b == 0))
//       return res;
//     res++;
//   }
// }

////paramsum
// void ft_putchar(char c)
// {
//   write (1, &c, 1);
// }
//
// void ft_putnbr_min(int nbr)
// {
//   if (nbr > 9)
//     ft_putnbr_min(nbr / 10);
//   ft_putchar(nbr % 10 + '0');
// }
//
// int main(int argc, char **argv)
// {
//   (void)argv;
//   if (argc == 1)
//     write (1, "\n", 1);
//   ft_putnbr_min(argc - 1);
// }

////pgcd
// int main(int argc, char **argv)
// {
//   if (argc == 3)
//   {
//     int num1 = atoi(argv[1]);
//     int num2 = atoi(argv[2]);
//
//     if (num1 > 0 && num2 > 0)
//     {
//       while (num1 != num2)
//       {
//         if (num1 > num2)
//           num1 = num1 - num2;
//         else if (num1 < num2)
//             num2 = num2 - num1;
//       }
//       printf("%d", num1);
//     }
//   }
//   printf("\n");
// }

////print_hex
// unsigned int ft_atoi(char *str)
// {
//   unsigned int i = 0;
//   int sign = 1;
//   unsigned int result = 0;
//
//   while (str[i] && (str[i] >= 9 && str[i] <= 13 || (str[i] == ' ')))
//     i++;
//   if (str[i] == '+' || str[i] == '-')
//   {
//     if (str[i] == '-')
//       sign = - sign;
//     i++;
//   }
//   while (str[i] >= '0' && str[i] <= '9')
//   {
//     result = result * 10 + str[i] - '0';
//     i++;
//   }
//   return result * sign;
// }
//
// void print_hex(int nbr)
// {
//   char *digits = "0123456789abcdef";
//   if (nbr >= 16)
//     print_hex(nbr / 16);
//   nbr = digits[nbr % 16];
//   write(1, &nbr, 1);
// }
//
// int main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//     print_hex(ft_atoi(argv[1]));
//   }
//   write(1, "\n", 1);
// }

////rstr_capitalize
// void r_capitalizer(char *s)
// {
//     int i = 0;
//
//     while (s[i])
//     {
//         if (s[i] >= 'A' && s[i] <= 'Z')
//             s[i] += 32;
//
//         if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == '\0' || s[i + 1] == ' '))
//             s[i] -= 32;
//
//         write(1, &s[i], 1);
//         i++;
//     }
// }
//
// int main(int argc, char **argv)
// {
//   if (argc < 2)
//   {
//     write (1, "\n", 1);
//     return 0;
//   }
//   int i = 1;
//   while (i < argc)
//   {
//     r_capitalizer(argv[i]);
//     write (1, "\n", 1);
//     i++;
//   }
//   return 0;
// }

////str_capitalize
// void str_capitalize(char *str)
// {
//   int i = 0;
//   while(str[i])
//   {
//     if (str[i] >= 65 && str[i] <= 90)
//       str[i] = str[i] + 32;
//     if (str[i] >= 97 && str[i] <= 122 && (str[i - 1] == ' '))
//         str[i] = str[i] - 32;
//     write(1, &str[i], 1);
//     i++;
//   }
// }
//
// int main(int argc, char **argv)
// {
//   if (argc < 2)
//     write (1, "\n", 1);
//   int i = 1;
//   while(i < argc)
//   {
//     str_capitalize(argv[i]);
//     write(1, "\n", 1);
//     i++;
//   }
//   return 0;
// }

////Mult_tab
// int ft_atoi_no_sign(char *str)
// {
//   int i = 0;
//   int result = 0;
//
//   while(str[i] && (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
//     i++;
//   while(str[i] >= '0' && str[i] <= '9')
//   {
//     result = result * 10 + str[i] - '0';
//     i++;
//   }
//   return result;
// }
//
// void ft_putchar(char c)
// {
//   write (1, &c, 1);
// }
//
// void ft_putnbr(int nbr)
// {
//   if (nbr > 9)
//     ft_putnbr(nbr / 10);
//   ft_putchar(nbr % 10 + '0');
// }
//
// void ft_putstr(char *str)
// {
//   int i = 0;
//   while(str[i])
//   {
//     write(1, &str[i], 1);
//     i++;
//   }
// }
//
// int main(int argc, char **argv)
// {
  // if (argc < 2)
  // {
  //   write(1, "\n", 1);
  //   return 0;
  // }
//   int i = 1;
//   int num = ft_atoi_no_sign(argv[1]);
//   while(i <= 9)
//   {
//     ft_putnbr(i);
//     ft_putstr(" X ");
//     ft_putnbr(num);
//     ft_putstr(" = ");
//     ft_putnbr(i * num);
//     write (1, "\n", 1);
//     i++;
//   }
//   return 0;
// }
////---------------------------------------------(LEVEL 4)-------------------------------------------------
////flood_fill
// void fill(char **tab, t_point size, char target, int row, int col)
// {
//   if (row < 0 || col < 0 || row >= size.y || col >= size.x)
//     return;
//   if (tab[row][col] != target)
//     return;
//   tab[row][col] = 'F';
//   fill(tab, size, target, row - 1, col);
//   fill(tab, size, target, row +1, col);
//   fill(tab, size, target, row, col - 1);
//   fill(tab, size, target, row, col + 1);
// }
//
// void flood_fill(char **tab, t_point size, t_point begin)
// {
//     char target = tab[begin.y][begin.x];
//     fill(tab, size, target, begin.y, begin.x);
// }

////fprime
// int main(int argc, char **argv)
// {
//   if (argc ==2)
//   {
//     int num = atoi(argv[1]);
//     int i = 2;

//     while (i <= num)
//     {
//      if (num % i == 0)
//       {
//        printf("%d", i);
//        num = num / i;
//        if(num > 1)
//          printf("*");
//       }
//       else
//        i++;
//     }
//     printf("\n");
//   }
// }

// char *ft_strdup(char *str)
// {
//   int i = 0;
//   char *res;
//   int j = 0;
//
//   while (str[i])
//     i++;
//   res = malloc(sizeof(char) * i + 1);
//   while(i >= 0)
//   {
//     res[j] = str[j];
//     j++;
//   }
//   return res;
// }
//
// int lenn(int n)
// {
//     int count = 0;
//
//     if (n == 0)
//         return 1;
//
//     if (n < 0)
//         n = -n;   // make it positive
//
//     while (n > 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }
//
//
// char	*ft_itoa(int n)
// {
// 	long	nb;
// 	int		lenght;
// 	char	*str;
// 	int		sign;
//
// 	nb = n;
// 	sign = (n < 0);
// 	if (nb == -2147483648)
// 		return (ft_strdup("-2147483648"));
// 	if (sign)
// 		nb = -nb;
// 	lenght = lenn(nb) + sign;
// 	str = (char *)malloc(sizeof(char) * lenght + 1);
// 	if (!str)
// 		return (NULL);
// 	str[lenght] = '\0';
// 	while (lenght > sign)
// 	{
// 		lenght--;
// 		str[lenght] = (nb % 10) + '0';
// 		nb = nb / 10;
// 	}
// 	if (sign)
// 		str[0] = '-';
// 	return (str);
// }

////ft_list_foreach
// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;
//
//
// void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	while (begin_list != NULL)
// 	{
// 		if (begin_list->data != NULL)
// 			(*f)(begin_list->data);
// 		begin_list = begin_list->next;
// 	}
// }

////ft_list_remove
// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
//     t_list *tmp;
//
//     if (begin_list == NULL || *begin_list == NULL)
//         return;
//
//     if (cmp((*begin_list)->data, data_ref) == 0)
//     {
//         tmp = *begin_list;
//         *begin_list = (*begin_list)->next;
//         free(tmp);
//         ft_list_remove_if(begin_list, data_ref, cmp);
//     }
//     else
//         ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
// }

////rev_wstr
// int main(int ac, char **av)
// {
//     if (ac != 2)
//     {
//         write(1, "\n", 1);
//         return 0;
//     }
//     char *str = av[1];
//     int i = 0;
//     while (str[i])
//         i++;
//     int end = i;
//     while (end > 0)
//     {
//         int start = end - 1;
//         while (start >= 0 && str[start] != ' ')
//             start--;
//
//         write(1, str + start + 1, end - start - 1);
//
//         if (start > 0)
//             write(1, " ", 1);
//
//         end = start;
//     }
//
//     write(1, "\n", 1);
//     return 0;
// }

