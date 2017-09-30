add_executable(
	kop
	main.cpp
	# "../deps/imgui/imgui.cpp"
)

target_include_directories(
	kop
	PRIVATE
		# "../deps/imgui/"
		"${glbinding_cmake_source_dir}/source/glbinding/include"
		"${SDL2_include_dir}"
)

target_link_libraries(kop 
	glbinding
	SDL2
)