/**
 * gotta use stdint so we can use the same type in C++/C
 * could make the example a bit more complicated with some
 * #defines to fix but it's simpler this way.
 */
#include <stdint.h>

#ifdef __cplusplus

#include <string>
using namespace std;
class Foo
{
public:
   ~Foo();
   string GetStdoutFromCommand(string cmd);

private:
};

#endif

#ifdef __cplusplus
extern "C"
{
#endif

   void printString();

#ifdef __cplusplus
}
#endif
