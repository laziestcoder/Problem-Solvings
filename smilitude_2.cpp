// note that, I don't need to add any header for this program! ;)

struct SoldierLabeling{

	int count( int n, int l, int u ) {
	    int ret = 0;
	    for(int i=l; i<=n; i++) {
                int num = i;
                int dig = 0;
                while( num > 0 ) dig++, num /= 10;
                if( dig >= l && dig <= u ) ret ++;
            }
            return ret;
	}

};
