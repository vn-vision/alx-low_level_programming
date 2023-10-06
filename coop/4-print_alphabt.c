#include <stdio.h>

/**
* main -Entry point
* Return: 0 success
* print small letters except q,e
*/

int main(void)
{
	char _qe;
	_qe = 'a'
	
	do
	{
		if(_qe != 'q' && _qe != 'e')
		{
			putchar(_qe);
		}
		_qe++;
	}
	while(_qe <= 'z');
	
	putchar("\n");
}
