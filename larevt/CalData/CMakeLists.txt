simple_plugin(CalWireAna "module"
              lardataobj_RecoBase
              lardata_Utilities_LArFFT_service
              lardata_Utilities
              larcorealg_Geometry
              ${ART_FRAMEWORK_SERVICES_REGISTRY}
              ${ART_ROOT_IO_TFILESERVICE_SERVICE}
              ${ART_ROOT_IO_TFILE_SUPPORT}
	      ${MF_MESSAGELOGGER}
              ${ROOT_CORE}
              ${ROOT_HIST}
              ${ROOT_MATHCORE})

simple_plugin(CalWire "module"
              larcorealg_Geometry
              lardataobj_RawData
              lardata_ArtDataHelper
              ${ART_FRAMEWORK_SERVICES_REGISTRY}
              ${MF_MESSAGELOGGER}
              ${ROOT_CORE}
              ${ROOT_HIST}
              ${ROOT_MATHCORE}
              ${ROOT_RIO})

simple_plugin(CalWireT962 "module"
              larcorealg_Geometry
              lardataobj_RawData
              lardata_ArtDataHelper
              ${ART_FRAMEWORK_SERVICES_REGISTRY}
              ${MF_MESSAGELOGGER}
              ${ROOT_CORE}
              ${ROOT_HIST}
              ${ROOT_MATHCORE}
              ${ROOT_RIO})

install_headers()
install_fhicl()
install_source()

add_subdirectory(test)
