inc_dir = include_directories('.')
lib_list = {}

foreach lib, src : lib_list
    set_variable('chapter_3_lib_' + lib, 
        static_library('chapter_3_lib_' + lib, sources: src, include_directories: inc_dir))
endforeach

executable('chapter_3_1', '1_main.c')
