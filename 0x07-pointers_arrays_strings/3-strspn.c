unsigned in _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; accept[j] != '\0'; j++)
		{
			if(s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if(accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count)
}
