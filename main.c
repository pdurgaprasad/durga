/*
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

    // Insert code
    DDRD&=~(1<<0);
    PORTD|=(1<<0);
    DDRD|=(1<<1);

    while(1)
    {
        if(!(PIND &1))
        {
            PORTD|=(1<<1);
            _delay_ms(2000);
        }
        else
        {
            PORTD&=~(1<<1);
        _delay_ms(2000);
    }

    return 0;
}
}
