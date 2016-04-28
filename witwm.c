/* WITWM: WorkIng Title Window Manager
   Cameron Jackson
 */

#include <libconfig.h>
#include <stdio.h>
#include <stdlib.h>

int get_config_val(config_t*, const char*, const char**);

int main()
{
  char* cfname = "wm.conf";

  config_t* conf; /* Configuration object */
  conf = (config_t*)malloc(sizeof(config_t));
  config_init(conf); /* Initialize config file object */

  /* config_setting_t *setting; */

  FILE* cfstream; /* Configuration file object */
  cfstream = fopen(cfname,"r"); /* Open config file stream object */
  if(cfstream == NULL)
  {
    printf("Error, configuration file not found.\n");
    return(EXIT_FAILURE);
  }
    
  if(config_read(conf,cfstream) == CONFIG_FALSE)
  {
    printf("Error reading configuration file.\n");
    return(EXIT_FAILURE);
  }

  /* Settings */
  const char* logoff;
  const char* quit;

  const char* move_l;
  const char* move_r;
  const char* move_u;
  const char* move_d;

  const char* focus_l;
  const char* focus_r;
  const char* focus_u;
  const char* focus_d;

  const char* max_v;
  const char* max_h;
  const char* max_f;

  get_config_val(conf, "logoff", &logoff);
  get_config_val(conf, "quit", &quit);
  get_config_val(conf, "move.left", &move_l);
  get_config_val(conf, "move.right", &move_r);
  get_config_val(conf, "move.up", &move_u);
  get_config_val(conf, "move.down", &move_d);
  get_config_val(conf, "focus.left", &focus_l);
  get_config_val(conf, "focus.right", &focus_r);
  get_config_val(conf, "focus.up", &focus_u);
  get_config_val(conf, "focus.down", &focus_d);
  get_config_val(conf, "maximize.vertical", &max_v);
  get_config_val(conf, "maximize.horizontal", &max_h);
  get_config_val(conf, "maximize.full", &max_f);  

  config_destroy(conf);
  free(conf);
  
  return(EXIT_SUCCESS);
}

int get_config_val(config_t* conf, const char* path, const char** value)
{
  if(!config_lookup_string(conf, path, value))
     return(EXIT_FAILURE);

  return(EXIT_SUCCESS);
}
