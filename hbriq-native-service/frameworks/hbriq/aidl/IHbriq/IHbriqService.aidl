/*
 * Copyright (C) 2018 HiveBriq Software
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Note: make sure package name is actual directory listing
// in this case parent directory structure of this file will
// android/hardware/IHbriqService.aidl

package IHbriq;

/**
  * interface for the service
  * Define all the methods/apis required to be exposed via service
  */

interface IHbriqService {
    int openDevice(in String dev);
}
