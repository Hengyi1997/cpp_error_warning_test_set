aux_source_directory(. DIR_SRCS)

foreach (file_name ${DIR_SRCS})
    STRING(REGEX REPLACE "./" "" lib_name ${file_name})
    add_library(${lib_name}.so ${file_name})
endforeach (file_name)


