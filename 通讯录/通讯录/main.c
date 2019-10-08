#include"Contact.h"
int main()
{

	int input = 0;
	Contact con;
	Init(&con);
	do
	{
		menu();
		printf("ÇëÊäÈëÄãµÄ²Ù×÷£º");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			destory(&con);
			break;
		case ADD:
			Add(&con);
			break;
		case DEL:
			del(&con);
			break;
		case SEARCH:
			findalone(&con);
			break;
		case SHOW:
			Show(&con);
			break;
		case CLEAR:
			clear(&con);
			break;
		case SORT:
			break;
		case DESTORY:
			destory(&con);
			break;
		default:
			break;
		}
	} while (input!=0);

	system("pause");
	return 0;
}