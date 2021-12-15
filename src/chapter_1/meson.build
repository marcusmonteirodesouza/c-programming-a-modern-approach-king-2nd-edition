inc_dir = include_directories('.')
lib_list = {'3': ['3.c' ], '4': ['4.c'], '6': ['6.c']}

foreach lib, src : lib_list
    set_variable('chapter_1_lib_' + lib, 
        static_library('chapter_1_lib_' + lib, sources: src, include_directories: inc_dir))
endforeach

chapter_1_3_dep = declare_dependency(link_with: chapter_1_lib_3, include_directories: inc_dir)
chapter_1_4_dep = declare_dependency(link_with: chapter_1_lib_4, include_directories: inc_dir)
chapter_1_6_dep = declare_dependency(link_with: chapter_1_lib_6, include_directories: inc_dir)
