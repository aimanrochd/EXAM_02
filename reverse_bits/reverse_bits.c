unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int				i = 8;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return (res);
}
