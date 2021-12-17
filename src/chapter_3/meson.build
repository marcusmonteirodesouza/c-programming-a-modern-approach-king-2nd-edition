inc_dir = include_directories('.')
lib_list = {'3': '3.c', '5': '5.c'}

foreach lib, src : lib_list
    set_variable('chapter_3_lib_' + lib, 
        static_library('chapter_3_lib_' + lib, sources: src, include_directories: inc_dir))
endforeach

chapter_3_3_dep = declare_dependency(link_with: chapter_3_lib_3, include_directories: inc_dir)
chapter_3_5_dep = declare_dependency(link_with: chapter_3_lib_5, include_directories: inc_dir)

executable('chapter_3_1', '1_main.c')
executable('chapter_3_2', '2_main.c')
executable('chapter_3_3', '3_main.c', dependencies: [chapter_3_3_dep])
executable('chapter_3_4', '4_main.c')
executable('chapter_3_5', '5_main.c', dependencies: [chapter_3_5_dep])
