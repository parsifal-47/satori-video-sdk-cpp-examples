# Empty Tensorflow Bot

- Building: `mkdir -p build && cd build && cmake -DCMAKE_BUILD_TYPE=Release ../ && make -j8`

This bot is using InceptionV3 model and shows the example on how to run basic TF code with
Satori Video SDK. It depends on `Tensorflow` conan packet which should be available from
the same repository with `SatoriVideo`.

As you need to be able to build Tensorflow from sources, you need to have `bazel`
additionally to SDK requirements. Please refer to [Tensorflow installation page](https://www.tensorflow.org/install/install_sources) for more information.

To run this bot, you need to download and extract TF graph for InceptionV3, please refer to [this guide](https://www.tensorflow.org/tutorials/image_recognition).

Default configuration expects a file named `inception_v3_2016_08_28_frozen.pb` in working directory.

Once you have bot binary and the model, run it with the resolution `299x299`, because
standard model accepts only these dimensions. Command line arguments: `--input-resolution=299x299 --keep-proportions=0`.

You should see "image_tensor size = 4004" in bot's output.

For more information on Tensorflow please refer to its [website](https://www.tensorflow.org).
