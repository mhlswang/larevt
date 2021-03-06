#include "fhiclcpp/ParameterSet.h"
#include "larevt/CalibrationDBI/Providers/DBFolder.h"

#include "DatabaseRetrievalAlg.h"

#include <string>

namespace lariov {

  /// Configure using fhicl::ParameterSet
  void DatabaseRetrievalAlg::Reconfigure(fhicl::ParameterSet const& p) {

    std::string foldername = p.get<std::string>("DBFolderName");
    std::string url        = p.get<std::string>("DBUrl");
    std::string tag        = p.get<std::string>("DBTag", "");
    fFolder.reset(new DBFolder(foldername, url, tag));
  }
}
