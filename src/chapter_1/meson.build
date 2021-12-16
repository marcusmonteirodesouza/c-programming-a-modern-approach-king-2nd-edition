inc_dir = include_directories('.')
lib_list = {'3': ['3.c' ], '4': ['4.c'], '6': ['6.c'], '7': ['7.c'], '8': ['8.c']}

foreach lib, src : lib_list
    set_variable('chapter_1_lib_' + lib, 
        static_library('chapter_1_lib_' + lib, sources: src, include_directories: inc_dir))
endforeach

chapter_1_3_dep = declare_dependency(link_with: chapter_1_lib_3, include_directories: inc_dir)
chapter_1_4_dep = declare_dependency(link_with: chapter_1_lib_4, include_directories: inc_dir)
chapter_1_6_dep = declare_dependency(link_with: chapter_1_lib_6, include_directories: inc_dir)
chapter_1_7_dep = declare_dependency(link_with: chapter_1_lib_7, include_directories: inc_dir)
chapter_1_8_dep = declare_dependency(link_with: chapter_1_lib_8, include_directories: inc_dir)

executable('chapter_1_1', '1_main.c')
executable('chapter_1_3', '3_main.c', dependencies: [chapter_1_3_dep])
executable('chapter_1_4', '4_main.c', dependencies: [chapter_1_4_dep])
executable('chapter_1_6', '6_main.c', dependencies: [chapter_1_6_dep])
executable('chapter_1_7', '7_main.c', dependencies: [chapter_1_7_dep])
executable('chapter_1_8', '8_main.c', dependencies: [chapter_1_8_dep])
