add_executable(
	kop
	main.cpp
	../deps/imgui/imgui.cpp
)

target_include_directories(
	kop
	PRIVATE
		"../deps/imgui/"
)

find_package(glew REQUIRED)

target_link_libraries(kop 
	glew_static
)