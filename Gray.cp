// Gray.cp#include "Gray.h"Gray::Gray(const char* aName, int aNervousness)	: Squirrel(aName, aNervousness) {}void Gray::SetNervousness(int newNervousness) {	Squirrel::SetNervousness(newNervousness - 1);}