# MSc_project
* Title: **Brain-Machine Interface firing rate estimation and neural decoding**
* Fancy poster and detailed report can be found in the submission folder
* The proposed BMI system can be seen in [BMIFlow](https://user-images.githubusercontent.com/72474193/132912148-4448cd21-71c4-4799-8909-797a6a0b0e36.png)



## Datasets
* Synthetic datasets can be found in https://github.com/nurahmadi/BAKS
* Real-world datasets indy_20160930_05 (neural broadband signal + behaviour outputs) comes from [link to Datasets!](https://zenodo.org/record/3854034#.YTu4op70lmq)

## Matlab
* Function: consists of all function needed by the main file
* Function Testing: Huffman, neural decoder, data organisation and normalisation
* Firing Rate Estimation: synthetic testing, BAKs, Guassian Kernel and PISI
* WF and KF : parameter training and prediciton testing

## Vivado_HLS
* Floating-point for both PISI and binning
* Fixed-point for both PISI and binning (Inside the folder: we have parallel architecture called unrolled_f, where f is unrolled factor)

## Vivado
* Binning Xilinx SDK code
* PISI Xilinx SDK code
