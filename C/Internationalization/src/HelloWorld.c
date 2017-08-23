#include <stdio.h> 	/* printf */
#include <locale.h>  /* setlocal */
#include <libintl.h> /* GNU gettext */

#include <stdlib.h>  /* getenv */

/* convention to mark strings that can be localized */
#define _(s) gettext(s)

int main(int argc, char *argv[]){
	/* setup */
	setlocale(LC_ALL, "");
	/* in a real example getenv would be replaced with "/usr/share/locale" */
	bindtextdomain("HelloWorld", getenv("PWD"));
	textdomain("HelloWorld");

	/* notice the _() this string can be localized */
	printf(_("Hello World\n"));

	return 0;
}
