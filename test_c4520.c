uint8_t test_C4520(void)
{
		uint8_t res = 1;
        Direct_L=(BIT_L0 | BIT_L1 | BIT_L6 | BIT_L7);
        Direct_H=(BIT_H7 | BIT_H6 | BIT_H1 | BIT_H0);
        Port_L=(BIT_L6);
        Port_H=(BIT_H1 | BIT_H0);
        Port_L=0;
        Port_H=(BIT_H0);
        delay1ms();
        res &= ((Pin_L==0) && (Pin_H==(BIT_H0)));

        Port_L=(BIT_L1);
        Port_H=(BIT_H6 | BIT_H0);
        Port_L=(BIT_L0 | BIT_L1);
        Port_H=(BIT_H7 | BIT_H6 | BIT_H0);
        Port_L=(BIT_L1);
        Port_H=(BIT_H6 | BIT_H0);
        delay1ms();
        res &= ((Pin_L==(BIT_L1 | BIT_L2)) && (Pin_H==(BIT_H6 | BIT_H5 | BIT_H0)));

        Port_L=(BIT_L1);
        Port_H=(BIT_H6 | BIT_H0);
        Port_L=(BIT_L0 | BIT_L1);
        Port_H=(BIT_H7 | BIT_H6 | BIT_H0);
        Port_L=(BIT_L1);
        Port_H=(BIT_H6 | BIT_H0);
        delay1ms();
        res &= ((Pin_L==(BIT_L1 | BIT_L3)) && (Pin_H==(BIT_H6 | BIT_H4 | BIT_H0)));

        for (uint8_t i=0;i<10;i++){    
        Port_L=(BIT_L1);
        Port_H=(BIT_H6 | BIT_H0);
        Port_L=0;
        Port_H=(BIT_H0); }
        delay1ms();
        res &= ((Pin_L==(BIT_L4 | BIT_L5)) && (Pin_H==(BIT_H3 | BIT_H2 | BIT_H0)));

        Port_L=0;
        Port_H=0;            
	return res;
    }