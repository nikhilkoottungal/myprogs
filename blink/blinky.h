    void blink1()
    {
	    PORTD=0xff;
	    _delay_ms(100);
	    PORTD=0x00;
	    _delay_ms(100);
	    
    }
