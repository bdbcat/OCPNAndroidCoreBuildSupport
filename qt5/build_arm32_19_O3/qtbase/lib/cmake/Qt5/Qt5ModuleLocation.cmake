get_filename_component(_qt5_root_dir "${CMAKE_CURRENT_LIST_DIR}/../../../.." ABSOLUTE)

file(GLOB qtmodules ${_qt5_root_dir} ${_qt5_root_dir}/*)
foreach(qtmodule ${qtmodules})
    if(IS_DIRECTORY ${qtmodule})
        list(APPEND _qt5_module_paths ${qtmodule})
    endif()
endforeach()

set(_qt5_module_location_template ${_qt5_root_dir})
