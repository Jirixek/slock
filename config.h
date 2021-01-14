/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e313e",   /* after initialization */
	[INPUT] =  "#6a7088",   /* during input */
	[FAILED] = "#902c2c",   /* wrong password */
	[BLOCKS] = "#2e313e",   /* key feedback block */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;


// ==============
//   Blocks bar
// ==============
static short int blocks_enabled = 1; // 0 = don't show blocks
static const int blocks_width = 0; // 0 = full width
static const int blocks_height = 16;

// Position
static const int blocks_x = 0;
static const int blocks_y = 0;

// Number of blocks
static const int blocks_count = 10;
