## How to use

* run make
```shell
$ make
```
* enter the locale dir
```shell
$ cd locale
```
* run the program
```shell
$ ./HelloWorld
Hello World
$ LANGUAGE=ja_JP.utf-8 ./HelloWorld
こんにちは世界
```
* create your own translation
```shell
# create ./locale/(language)/LC_MESSAGES/
# example
$ mkdir locale/ja
$ mkdir locale/ja/LC_MESSAGES
# make sure git tracks this dir
$ touch locale/(your locale)/LC_MESSAGES/README
# create your po file
$ msginit --input=locale/HelloWorld.pot --locale=(your locale here) --output=locale/(your locale here)/HelloWorld.po
```
* Edit your .po file
```pot
#. notice the _() this string can be localized
#: src/HelloWorld.c:18
#, c-format
msgid "Hello World\n"
msgstr ""   #What would this string look like in your language?
```
* When done create the .mo file so that it can be used
```shell
$ msgfmt --output-file=locale/(your locale)/LC_MESSAGES/HelloWorld.mo locale/(your locale)/HelloWorld.po
```
* you are done
```shell
$ cd locale
$ ./HelloWorld
Hello World
$ LANGUAGE=(insert locale here) ./HelloWorld
MAGIC
```
