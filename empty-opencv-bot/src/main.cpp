#include <satorivideo/opencv/opencv_bot.h>
#include <iostream>

namespace sv = satori::video;

namespace empty_opencv_bot {

void process_image(sv::bot_context & /*context*/, const cv::Mat &frame) {
  std::cout << "got frame " << frame.size << "\n";
}

nlohmann::json process_command(sv::bot_context & /*context*/,
                               const nlohmann::json & /*command*/) {
  std::cout << "bot is initializing, libraries are ok" << '\n';
  return nullptr;
}

}  // namespace empty_opencv_bot

int main(int argc, char *argv[]) {
  sv::opencv_bot_register(
      {&empty_opencv_bot::process_image, &empty_opencv_bot::process_command});
  return sv::opencv_bot_main(argc, argv);
}
