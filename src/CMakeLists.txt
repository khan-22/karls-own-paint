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
		"${SDL2_BINARY_DIR}/include" 
		"${SDL2_SOURCE_DIR}/include"
)

target_link_libraries(kop 
	glbinding
	SDL2
)