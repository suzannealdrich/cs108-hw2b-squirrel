// Gray.h/*	Gray is a subclass of Squirrel. 	Overrides SetNervousness.*/#include "Squirrel.h"class Gray : public Squirrel {public:	Gray(const char* aName, int aNervousness);		virtual void SetNervousness(int newNervousness);};