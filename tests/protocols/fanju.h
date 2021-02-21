static const int fanju_nrtests = 7;
static const struct raw_t fanju_tests[] = {
	{ // fails at validate() - message too short
		"936 936 936 936 936 936 468 7956 468 4212 468 1872 468 1872 468 1872 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 1872 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 15912",
		"",
		NULL,
		-1
	},
	{ // fails at validate() - message too long
		"936 936 936 936 936 936 936 936 468 7956 468 4212 468 1872 468 1872 468 1872 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 1872 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 468 4212 15912",
		"",
		NULL,
		-1
	},
	{ // skipped in parseCode() - header <> 1
		"936 936 936 936 936 936 936 936 468 1872 468 4212 468 1872 468 1872 468 1872 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 1872 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 15912",
		"",
		NULL,
		0
	},
	{ // skipped in parseCode() - checksum invalid
		"936 936 936 936 936 936 936 936 468 7956 468 4212 468 1872 468 4212 468 1872 468 3744 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 15912",
		"",
		NULL,
		0
	},
	{
		"936 936 936 936 936 936 936 936 468 7956 468 4212 468 1872 468 1872 468 1872 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 1872 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 4212 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 15912",
		"{\"id\":136,\"temperature\":20.3,\"humidity\":30.0,\"battery\":0}",
		NULL,
		0
	},
	{
		"936 936 936 936 936 936 936 936 468 7956 936 1872 468 4212 468 4212 468 1872 468 3744 468 4212 468 4212 468 4212 468 3744 468 4212 468 1872 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 4212 468 4212 468 1872 468 1872 468 4212 468 4212 468 1872 468 3744 468 1872 468 1872 468 4212 468 1872 468 1872 468 4212 468 4212 468 3744 468 1872 468 1872 468 1872 468 1872 468 1872 468 1872 468 4212 468 15912",
		"{\"id\":111,\"temperature\":23.4,\"humidity\":38.0,\"battery\":1}",
		NULL,
		0
	},
	{
		"938 938 938 938 938 938 938 938 469 7973 469 1876 469 4221 469 4221 469 1876 469 3752 469 4221 469 4221 469 4221 469 3752 469 1876 469 1876 469 1876 469 3752 469 1876 469 4221 469 1876 469 1876 469 4221 469 1876 469 1876 469 1876 469 1876 469 4221 469 1876 469 3752 469 1876 469 4221 469 1876 469 1876 469 1876 469 4221 469 4221 469 1876 469 1876 469 4221 469 4221 469 1876 469 1876 469 1876 469 4221 469 15946",
		"{\"id\":111,\"temperature\":-8.6,\"humidity\":33.0,\"battery\":1}",
		NULL,
		0
	}
};
