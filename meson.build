project('c-programming-a-modern-approach', 'c')

add_global_arguments('-DUNITY_INCLUDE_DOUBLE', language : 'c')

unity_dep = dependency('unity', fallback: ['unity', 'unity_dep'])

subdir('src')
subdir('test')
