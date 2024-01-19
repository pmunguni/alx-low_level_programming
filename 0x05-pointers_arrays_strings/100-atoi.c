int _atoi(char *s)
{
	int sign = 1;
        int result = 0;

	while (*s == ' ' || *s == '\t')
       	{
		s++;
        }

        if (*s == '-' || *s == '+')
       :WQ	{
	        sign = (*s++ == '-') ? -1 : 1;
	
	}

	while (*s >= '0' && *s <= '9') {
		int digit = *s - '0';
		// Check for potential overflow
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > (INT_MAX % 10))) {
			return sign == -1 ? INT_MIN : INT_MAX;
       }
		result = result * 10 + digit;
		s+==
       


i	}
						    
						                                                         return result * sign;
						                                               }b
