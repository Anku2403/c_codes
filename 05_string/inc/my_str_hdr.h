#ifndef MY_STR_HDR_H_INCLUDED
#define MY_STR_HDR_H_INCLUDED

char* my_concat(char *str1, char *str2);
int my_strlen(char *str);
char* replace_char(char *str, char o, char n);
void my_strcp(char *str1, char *str2);
void printallstrings();
char* squeeze(char *str, char c);
char* left_rotate(char *str, int num);
char* right_rotate(char *str, int num);
void find_substr(char* str, char*  substr);


#endif // MY_STR_HDR_H_INCLUDED
