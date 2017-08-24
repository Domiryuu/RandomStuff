#include <stdio.h>

int main(int argc, char *argv[]){
   int x;
   char q = 34;
   char s = ' ';
   char *i[] = {
      "#include <stdio.h>",
      "",
      "int main(int argc, char *argv[]){",
      "   int x;",
      "   char q = 34;",
      "   char s = ' ';",
      "   char *i[] = {",
      "   };",
      "   for(x = 0;x<7;x++){",
      "      puts(i[x]);",
      "   }",
      "   for(x = 0;x<19;x++){",
      "      putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(q);fputs(i[x], stdout);putchar(q);putchar(',');putchar(10);",
      "   }",
      "   putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(q);putchar('}');putchar(q);putchar(10);",
      "   for(x = 7;x<20;x++){",
      "      puts(i[x]);",
      "   }",
      "   return 0;",
      "}"
   };
   for(x = 0;x<7;x++){
      puts(i[x]);
   }
   for(x = 0;x<19;x++){
      putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(q);fputs(i[x], stdout);putchar(q);putchar(',');putchar(10);
   }
   putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(s);putchar(q);putchar('}');putchar(q);putchar(10);
   for(x = 7;x<20;x++){
      puts(i[x]);
   }
   return 0;
}
