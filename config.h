/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#0f1117",   /* after initialization */
	[INPUT] =  "#293158",   /* during input */
	[FAILED] = "#902c2c",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
