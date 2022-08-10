#include <stdio.h>

#define TWO 2
#define FOUR TWO * TWO
#define OW "Hello \
World!\n"
#define PX printf("X is %d\n", x)
#define FMT "X is %d.\n"

//创建数组的方法

static int deta1[TWO];
static int deta2[FOUR];

const int num = 2;
//const int deta3[num];
const int sum = 3 * num;

#define SQRT(x) ((x)*(x))

#define PRINT(X) printf("SQRT("#X") is %d\n", SQRT(X))

// 粘合操作！
#define XNAME(X) x ## n

// 可变参数
#define PR(...) printf(__VA_ARGS__)


int main(int argc, char *argv[])
{ 
	int x = TWO;

	PX;
	
	x = FOUR;

	printf(FMT, x);

	printf(OW);

	printf("sum = %d.\n", sum);

	printf("%d\n", SQRT(x + 2));

	PRINT(4);
	
	int XNAME(1) = 13;

	PR("X1 = %d\n", x);
	
	return 0;
}
