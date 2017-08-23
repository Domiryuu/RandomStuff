CFLAGS = -Wall -g

HelloWorld: src/HelloWorld.c locale/ja/LC_MESSAGES/HelloWorld.mo
	$(CC) $(CFLAGS) $(CPPFLAGS) -o locale/$@ $< $(LDFLAGS)
locale/ja/LC_MESSAGES/HelloWorld.mo: locale/ja/LC_MESSAGES/HelloWorld.po
	msgfmt --output-file=locale/ja/LC_MESSAGES/HelloWorld.mo locale/ja/HelloWorld.po
