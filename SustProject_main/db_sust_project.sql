-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Jul 30, 2017 at 07:49 AM
-- Server version: 10.1.19-MariaDB
-- PHP Version: 7.0.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `db_sust_project`
--

-- --------------------------------------------------------

--
-- Table structure for table `tbl_admin`
--

CREATE TABLE `tbl_admin` (
  `id` int(11) NOT NULL,
  `admin_name` varchar(255) NOT NULL,
  `admin_password` varchar(255) NOT NULL,
  `admin_email` varchar(255) NOT NULL,
  `admin_category` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_admin`
--

INSERT INTO `tbl_admin` (`id`, `admin_name`, `admin_password`, `admin_email`, `admin_category`) VALUES
(9, 'Towfiq', '123', 'towfiq.106@gmail.com', ''),
(13, 'amit', 'amit', 'amit@mail.com', ''),
(14, 'barma', 'barma', 'barma@gmail.com', ''),
(16, 'rana', '123', 'gtd@gmail.com', '');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_city`
--

CREATE TABLE `tbl_city` (
  `id` int(11) NOT NULL,
  `city_name` varchar(255) NOT NULL,
  `city_description` text NOT NULL,
  `div_id` int(11) NOT NULL,
  `city_image` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_city`
--

INSERT INTO `tbl_city` (`id`, `city_name`, `city_description`, `div_id`, `city_image`) VALUES
(5, 'Sylhet', 'Sylhet is a beautiful city', 16, '87a9ff7723.jpg'),
(6, 'Chittagong', 'Chittagong is a beautiful city', 12, '96b99f6253.jpg'),
(7, 'Khagracory', 'good', 12, '4d13d4d971.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_codegenerator`
--

CREATE TABLE `tbl_codegenerator` (
  `id` int(11) NOT NULL,
  `code` varchar(255) NOT NULL,
  `is_used` bit(3) NOT NULL,
  `hotel_id` int(3) NOT NULL,
  `transport_id` int(3) NOT NULL,
  `user_id` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_division`
--

CREATE TABLE `tbl_division` (
  `id` int(11) NOT NULL,
  `div_name` varchar(255) NOT NULL,
  `div_description` text NOT NULL,
  `div_image` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_division`
--

INSERT INTO `tbl_division` (`id`, `div_name`, `div_description`, `div_image`) VALUES
(11, 'Dhaka', 'Dhaka is the capital city of Bangladesh, in southern Asia. Set beside the Buriganga River, itâ€™s at the center of national government, trade and culture. The 17th-century old city was the Mughal capital of Bengal, and many palaces and mosques remain. American architect Louis Khanâ€™s National Parliament House complex typifies the huge, fast-growing modern metropolis.\r\nLocal time: Saturday 12:16 AM\r\nDistrict: Dhaka District\r\nWeather: 84Â°F (29Â°C), Wind S at 0 mph (0 km/h), 82% Humidity\r\nPopulation: 8.906 million (2011)\r\nPostal code: 1000, 1100, 12xx, 13xx    ', '5e48217b09.jpg'),
(12, 'Chittagong', 'Chittagong is large port city on the southeastern coast of Bangladesh. The Ethnological Museum has exhibits about the many different ethnic tribes across the country. Zia Memorial Museum, inside the former Old Circuit House, displays items belonging to former president Ziaur Rahman, who was assassinated on the site in 1981. The landmark Chandanpura Mosque has many onion-shaped domes and brightly painted minarets.\r\nWeather: 83Â°F (28Â°C), Wind SW at 5 mph (8 km/h), 91% Humidity\r\nGranted city status: 1863\r\nPostal code: 4000, 4100, 42xx', 'a3f6b8e013.jpg'),
(13, 'Rajshahi', 'Rajshahi is a metropolitan city in Bangladesh and a major urban, commercial and educational centre of North Bengal. It is the administrative seat of Rajshahi Division and Rajshahi District. \r\nArea: 37.33 miÂ²\r\nElevation: 59â€²\r\nWeather: 83Â°F (28Â°C), Wind S at 3 mph (5 km/h), 87% Humidity\r\nLocal time: Saturday 12:22 AM\r\nPopulation: 763,952 (2011)', '92260605f4.jpg'),
(14, 'Khulna', 'Khulna is the third-largest city of Bangladesh. It is the administrative seat of Khulna District and Khulna Division. As of the 2011 census, the city has a population of 663,342. Khulna is an old river port located on the Rupsha River.\r\nCity Corporation: 6 August 1990\r\nDivision: Khulna Division\r\nMunicipal Corporation: 12 December 1984\r\nWeather: 82Â°F (28Â°C), Wind SW at 4 mph (6 km/h), 89% Humidity\r\nDistrict: Khulna District', '278657a59a.jpg'),
(15, 'Barishal', 'Barisal is a major city that lies on the bank of Kirtankhola river in south-central Bangladesh. It is the largest city and the administrative headquarter of both Barisal district and Barisal Division. Wikipedia\r\nArea: 6.32 miÂ²\r\nPostal code: 8200\r\nWeather: 82Â°F (28Â°C), Wind SW at 4 mph (6 km/h), 88% Humidity\r\nDistrict: Barisal District\r\nPopulation: 328,278 (2011)', 'f9ab5f962d.jpg'),
(16, 'Sylhet', 'Sylhet is a city in eastern Bangladesh, on the Surma River. Itâ€™s known for its Sufi shrines, like the ornate tomb and mosque of 14th-century saint Hazrat Shah Jalal, now a major pilgrimage site near Dargah Gate. The tiny Museum of Rajas contains belongings of the local folk poet Hasan Raja. A 3-domed gateway stands at the 17th-century Shahi Eidgah, a huge open-air hilltop mosque built by Emperor Aurangzeb.\r\nWeather: 82Â°F (28Â°C), Wind NE at 1 mph (2 km/h), 87% Humidity\r\nDistrict: Sylhet District', '2933cf01fd.jpg'),
(17, 'Rangpur', 'Rangpur is one of the major cities in Bangladesh and Rangpur Division. Rangpur was declared a district headquarters on 16 December 1769, and established as a municipality in 1869, making it one of the oldest municipalities in Bangladesh. Wikipedia\r\nWeather: 82Â°F (28Â°C), Wind S at 1 mph (2 km/h), 86% Humidity\r\nPostal code: 5400\r\nCity Corporation: 1 July 2012\r\nDivision: Rangpur Division\r\nDistrict: Rangpur District', 'ceff6ab065.jpg'),
(18, 'Mymensingh', 'Mymensingh is situated on the river Brahmaputra and is the headquarters of the Mymensingh District under Mymensingh Division of Bangladesh. Mymensingh city is located about 120 km north of Dhaka which is the capital of the country. \r\nDistrict: Mymensingh District\r\nWeather: 82Â°F (28Â°C), Wind NE at 1 mph (2 km/h), 87% Humidity\r\nPostal code: 2200\r\nDivision: Mymensingh Division\r\nCalling code: 091', '9eb93287fd.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_place`
--

CREATE TABLE `tbl_place` (
  `id` int(11) NOT NULL,
  `place_name` varchar(255) NOT NULL,
  `place_description` text NOT NULL,
  `city_id` int(3) NOT NULL,
  `place_image` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_place`
--

INSERT INTO `tbl_place` (`id`, `place_name`, `place_description`, `city_id`, `place_image`) VALUES
(1, 'Jaflong', 'Jaflong is a beautiful place.', 5, '1f8098525e.jpg'),
(2, 'Lalakhal', 'Lalakhal is Almost so beautiful.', 5, 'b2e206c84e.jpg'),
(3, 'Potenga', 'Potenga is a sea beach', 6, '3d33634b49.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_plan`
--

CREATE TABLE `tbl_plan` (
  `id` int(11) NOT NULL,
  `from_city` varchar(255) NOT NULL,
  `destination_city` varchar(255) NOT NULL,
  `plan_description` text NOT NULL,
  `stay` int(3) NOT NULL,
  `place_id` int(3) NOT NULL,
  `start_date` date NOT NULL,
  `ending_date` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_registered_hotel`
--

CREATE TABLE `tbl_registered_hotel` (
  `id` int(11) NOT NULL,
  `hotel_name` varchar(255) NOT NULL,
  `hotel_email` varchar(255) NOT NULL,
  `hotel_description` text NOT NULL,
  `city_id` int(11) NOT NULL,
  `hotel_image` varchar(255) NOT NULL,
  `pending_info` bit(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_registered_transport`
--

CREATE TABLE `tbl_registered_transport` (
  `id` int(11) NOT NULL,
  `transport_email` varchar(255) NOT NULL,
  `transport_category` int(11) NOT NULL,
  `transport_description` text NOT NULL,
  `pending_info` bit(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_site_review`
--

CREATE TABLE `tbl_site_review` (
  `id` int(11) NOT NULL,
  `count_review` int(3) NOT NULL,
  `feedback` text NOT NULL,
  `user_id` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_transport_category`
--

CREATE TABLE `tbl_transport_category` (
  `id` int(11) NOT NULL,
  `category_name` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_user`
--

CREATE TABLE `tbl_user` (
  `id` int(11) NOT NULL,
  `username` varchar(255) NOT NULL,
  `email` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  `mobile_no` varchar(255) NOT NULL,
  `address` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tbl_admin`
--
ALTER TABLE `tbl_admin`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `admin_name` (`admin_name`),
  ADD UNIQUE KEY `admin_email` (`admin_email`);

--
-- Indexes for table `tbl_city`
--
ALTER TABLE `tbl_city`
  ADD PRIMARY KEY (`id`),
  ADD KEY `div_id` (`div_id`);

--
-- Indexes for table `tbl_codegenerator`
--
ALTER TABLE `tbl_codegenerator`
  ADD PRIMARY KEY (`id`),
  ADD KEY `hotel_id` (`hotel_id`),
  ADD KEY `transport_id` (`transport_id`),
  ADD KEY `user_id` (`user_id`);

--
-- Indexes for table `tbl_division`
--
ALTER TABLE `tbl_division`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tbl_place`
--
ALTER TABLE `tbl_place`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `place_name` (`place_name`),
  ADD KEY `city_id` (`city_id`);

--
-- Indexes for table `tbl_plan`
--
ALTER TABLE `tbl_plan`
  ADD PRIMARY KEY (`id`),
  ADD KEY `place_id` (`place_id`);

--
-- Indexes for table `tbl_registered_hotel`
--
ALTER TABLE `tbl_registered_hotel`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `hotel_name` (`hotel_name`),
  ADD UNIQUE KEY `hotel_email` (`hotel_email`),
  ADD KEY `city_id` (`city_id`);

--
-- Indexes for table `tbl_registered_transport`
--
ALTER TABLE `tbl_registered_transport`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `transport_email` (`transport_email`),
  ADD KEY `transport_category` (`transport_category`);

--
-- Indexes for table `tbl_site_review`
--
ALTER TABLE `tbl_site_review`
  ADD PRIMARY KEY (`id`),
  ADD KEY `user_id` (`user_id`);

--
-- Indexes for table `tbl_transport_category`
--
ALTER TABLE `tbl_transport_category`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `category_name` (`category_name`);

--
-- Indexes for table `tbl_user`
--
ALTER TABLE `tbl_user`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `username` (`username`),
  ADD UNIQUE KEY `email` (`email`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `tbl_admin`
--
ALTER TABLE `tbl_admin`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
--
-- AUTO_INCREMENT for table `tbl_city`
--
ALTER TABLE `tbl_city`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
--
-- AUTO_INCREMENT for table `tbl_codegenerator`
--
ALTER TABLE `tbl_codegenerator`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `tbl_division`
--
ALTER TABLE `tbl_division`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=19;
--
-- AUTO_INCREMENT for table `tbl_place`
--
ALTER TABLE `tbl_place`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
--
-- AUTO_INCREMENT for table `tbl_plan`
--
ALTER TABLE `tbl_plan`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `tbl_registered_hotel`
--
ALTER TABLE `tbl_registered_hotel`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `tbl_registered_transport`
--
ALTER TABLE `tbl_registered_transport`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `tbl_site_review`
--
ALTER TABLE `tbl_site_review`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `tbl_transport_category`
--
ALTER TABLE `tbl_transport_category`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `tbl_user`
--
ALTER TABLE `tbl_user`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- Constraints for dumped tables
--

--
-- Constraints for table `tbl_city`
--
ALTER TABLE `tbl_city`
  ADD CONSTRAINT `tbl_city_ibfk_1` FOREIGN KEY (`div_id`) REFERENCES `tbl_division` (`id`);

--
-- Constraints for table `tbl_codegenerator`
--
ALTER TABLE `tbl_codegenerator`
  ADD CONSTRAINT `tbl_codegenerator_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `tbl_user` (`id`),
  ADD CONSTRAINT `tbl_codegenerator_ibfk_2` FOREIGN KEY (`hotel_id`) REFERENCES `tbl_registered_hotel` (`id`),
  ADD CONSTRAINT `tbl_codegenerator_ibfk_3` FOREIGN KEY (`transport_id`) REFERENCES `tbl_registered_transport` (`id`);

--
-- Constraints for table `tbl_place`
--
ALTER TABLE `tbl_place`
  ADD CONSTRAINT `tbl_place_ibfk_1` FOREIGN KEY (`city_id`) REFERENCES `tbl_city` (`id`);

--
-- Constraints for table `tbl_plan`
--
ALTER TABLE `tbl_plan`
  ADD CONSTRAINT `tbl_plan_ibfk_1` FOREIGN KEY (`place_id`) REFERENCES `tbl_place` (`id`);

--
-- Constraints for table `tbl_registered_hotel`
--
ALTER TABLE `tbl_registered_hotel`
  ADD CONSTRAINT `tbl_registered_hotel_ibfk_1` FOREIGN KEY (`city_id`) REFERENCES `tbl_city` (`id`);

--
-- Constraints for table `tbl_registered_transport`
--
ALTER TABLE `tbl_registered_transport`
  ADD CONSTRAINT `tbl_registered_transport_ibfk_1` FOREIGN KEY (`transport_category`) REFERENCES `tbl_transport_category` (`id`);

--
-- Constraints for table `tbl_site_review`
--
ALTER TABLE `tbl_site_review`
  ADD CONSTRAINT `tbl_site_review_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `tbl_user` (`id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
