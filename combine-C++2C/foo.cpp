#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdint.h>

#include "foo.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Foo::~Foo()
{
}

string GetStdoutFromCommand(string cmd)
{

   string data;
   FILE *stream;
   const int max_buffer = 256;
   char buffer[max_buffer];
   cmd.append(" 2>&1");

   stream = popen(cmd.c_str(), "r");
   if (stream)
   {
      while (!feof(stream))
         if (fgets(buffer, max_buffer, stream) != NULL)
            data.append(buffer);
      pclose(stream);
   }
   return data;
}

void printString()
{
   std::string s = GetStdoutFromCommand("date");
   std::cout << s;
}