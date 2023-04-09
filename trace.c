#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char* argv[])
{
printf(1,"No of process start here %d\n",trace(atoi(argv[1])));
trace(atoi(argv[1]));
wait();
wait();
wait();
//trace(1);
printf(1,"The count is %d \n",trace(atoi(argv[1])));
exit();
}
