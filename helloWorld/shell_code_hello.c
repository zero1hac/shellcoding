const char code[] = "\xb0\x01\x31\xdb\xcd\x80";
//char code[] = "";
int main(int argc, char **argv)
{
	int (*func)();
	func = (int (*)()) code;
	(int)(*func)();
}
