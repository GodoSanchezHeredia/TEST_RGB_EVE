set(srcs "main.c"
         "tft.c"
         "tft_data.c")



set(eve_lib  
    "EVE/EVE_commands.c"
    "EVE/EVE_target.c"
    "EVE/EVE_supplemental.c")




idf_component_register(
    SRCS ${srcs} ${eve_lib} 
    INCLUDE_DIRS "." "EVE"
)



# idf_component_register(
#                         SRCS "main.c"
#                         INCLUDE_DIRS ".")