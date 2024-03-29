/*******************************************************************************
* File Name: generadorOnda.c
* Version 2.10
*
* Description:
*  This file provides the source code for the 8-bit Waveform DAC 
*  (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "generadorOnda.h"

uint8  generadorOnda_initVar = 0u;

const uint8 CYCODE generadorOnda_wave1[generadorOnda_WAVE1_LENGTH] = { 128u,128u,128u,128u,128u,128u,129u,129u,129u,129u,129u,130u,130u,130u,130u,130u,131u,131u,131u,131u,131u,132u,132u,132u,132u,132u,133u,133u,133u,133u,133u,134u,134u,134u,134u,134u,135u,135u,135u,135u,135u,136u,136u,136u,136u,136u,137u,137u,137u,137u,137u,138u,138u,138u,138u,138u,138u,139u,139u,139u,139u,139u,140u,140u,140u,140u,140u,141u,141u,141u,141u,141u,142u,142u,142u,142u,142u,143u,143u,143u,143u,143u,144u,144u,144u,144u,144u,145u,145u,145u,145u,145u,146u,146u,146u,146u,146u,146u,147u,147u,147u,147u,147u,148u,148u,148u,148u,148u,149u,149u,149u,149u,149u,150u,150u,150u,150u,150u,151u,151u,151u,151u,151u,152u,152u,152u,152u,152u,152u,153u,153u,153u,153u,153u,154u,154u,154u,154u,154u,155u,155u,155u,155u,155u,156u,156u,156u,156u,156u,156u,157u,157u,157u,157u,157u,158u,158u,158u,158u,158u,159u,159u,159u,159u,159u,160u,160u,160u,160u,160u,160u,161u,161u,161u,161u,161u,162u,162u,162u,162u,162u,163u,163u,163u,163u,163u,164u,164u,164u,164u,164u,164u,165u,165u,165u,165u,165u,166u,166u,166u,166u,166u,167u,167u,167u,167u,167u,167u,168u,168u,168u,168u,168u,169u,169u,169u,169u,169u,169u,170u,170u,170u,170u,170u,171u,171u,171u,171u,171u,172u,172u,172u,172u,172u,172u,173u,173u,173u,173u,173u,174u,174u,174u,174u,174u,174u,175u,175u,175u,175u,175u,176u,176u,176u,176u,176u,176u,177u,177u,177u,177u,177u,178u,178u,178u,178u,178u,178u,179u,179u,179u,179u,179u,179u,180u,180u,180u,180u,180u,181u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,191u,191u,191u,191u,191u,191u,192u,192u,192u,192u,192u,192u,193u,193u,193u,193u,193u,193u,194u,194u,194u,194u,194u,194u,195u,195u,195u,195u,195u,195u,196u,196u,196u,196u,196u,196u,197u,197u,197u,197u,197u,197u,198u,198u,198u,198u,198u,198u,199u,199u,199u,199u,199u,199u,200u,200u,200u,200u,200u,200u,200u,201u,201u,201u,201u,201u,201u,202u,202u,202u,202u,202u,202u,203u,203u,203u,203u,203u,203u,203u,204u,204u,204u,204u,204u,204u,205u,205u,205u,205u,205u,205u,206u,206u,206u,206u,206u,206u,206u,207u,207u,207u,207u,207u,207u,207u,208u,208u,208u,208u,208u,208u,209u,209u,209u,209u,209u,209u,209u,210u,210u,210u,210u,210u,210u,210u,211u,211u,211u,211u,211u,211u,211u,212u,212u,212u,212u,212u,212u,212u,213u,213u,213u,213u,213u,213u,213u,214u,214u,214u,214u,214u,214u,214u,215u,215u,215u,215u,215u,215u,215u,216u,216u,216u,216u,216u,216u,216u,217u,217u,217u,217u,217u,217u,217u,218u,218u,218u,218u,218u,218u,218u,218u,219u,219u,219u,219u,219u,219u,219u,220u,220u,220u,220u,220u,220u,220u,220u,221u,221u,221u,221u,221u,221u,221u,222u,222u,222u,222u,222u,222u,222u,222u,223u,223u,223u,223u,223u,223u,223u,223u,224u,224u,224u,224u,224u,224u,224u,224u,225u,225u,225u,225u,225u,225u,225u,225u,226u,226u,226u,226u,226u,226u,226u,226u,227u,227u,227u,227u,227u,227u,227u,227u,227u,228u,228u,228u,228u,228u,228u,228u,228u,229u,229u,229u,229u,229u,229u,229u,229u,229u,230u,230u,230u,230u,230u,230u,230u,230u,230u,231u,231u,231u,231u,231u,231u,231u,231u,231u,232u,232u,232u,232u,232u,232u,232u,232u,232u,233u,233u,233u,233u,233u,233u,233u,233u,233u,233u,234u,234u,234u,234u,234u,234u,234u,234u,234u,234u,235u,235u,235u,235u,235u,235u,235u,235u,235u,235u,236u,236u,236u,236u,236u,236u,236u,236u,236u,236u,237u,237u,237u,237u,237u,237u,237u,237u,237u,237u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,237u,237u,237u,237u,237u,237u,237u,237u,237u,237u,236u,236u,236u,236u,236u,236u,236u,236u,236u,236u,235u,235u,235u,235u,235u,235u,235u,235u,235u,235u,234u,234u,234u,234u,234u,234u,234u,234u,234u,234u,233u,233u,233u,233u,233u,233u,233u,233u,233u,233u,232u,232u,232u,232u,232u,232u,232u,232u,232u,231u,231u,231u,231u,231u,231u,231u,231u,231u,230u,230u,230u,230u,230u,230u,230u,230u,230u,229u,229u,229u,229u,229u,229u,229u,229u,229u,228u,228u,228u,228u,228u,228u,228u,228u,227u,227u,227u,227u,227u,227u,227u,227u,227u,226u,226u,226u,226u,226u,226u,226u,226u,225u,225u,225u,225u,225u,225u,225u,225u,224u,224u,224u,224u,224u,224u,224u,224u,223u,223u,223u,223u,223u,223u,223u,223u,222u,222u,222u,222u,222u,222u,222u,222u,221u,221u,221u,221u,221u,221u,221u,220u,220u,220u,220u,220u,220u,220u,220u,219u,219u,219u,219u,219u,219u,219u,218u,218u,218u,218u,218u,218u,218u,218u,217u,217u,217u,217u,217u,217u,217u,216u,216u,216u,216u,216u,216u,216u,215u,215u,215u,215u,215u,215u,215u,214u,214u,214u,214u,214u,214u,214u,213u,213u,213u,213u,213u,213u,213u,212u,212u,212u,212u,212u,212u,212u,211u,211u,211u,211u,211u,211u,211u,210u,210u,210u,210u,210u,210u,210u,209u,209u,209u,209u,209u,209u,209u,208u,208u,208u,208u,208u,208u,207u,207u,207u,207u,207u,207u,207u,206u,206u,206u,206u,206u,206u,206u,205u,205u,205u,205u,205u,205u,204u,204u,204u,204u,204u,204u,203u,203u,203u,203u,203u,203u,203u,202u,202u,202u,202u,202u,202u,201u,201u,201u,201u,201u,201u,200u,200u,200u,200u,200u,200u,200u,199u,199u,199u,199u,199u,199u,198u,198u,198u,198u,198u,198u,197u,197u,197u,197u,197u,197u,196u,196u,196u,196u,196u,196u,195u,195u,195u,195u,195u,195u,194u,194u,194u,194u,194u,194u,193u,193u,193u,193u,193u,193u,192u,192u,192u,192u,192u,192u,191u,191u,191u,191u,191u,191u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,182u,182u,182u,182u,182u,182u,181u,181u,181u,181u,181u,181u,180u,180u,180u,180u,180u,179u,179u,179u,179u,179u,179u,178u,178u,178u,178u,178u,178u,177u,177u,177u,177u,177u,176u,176u,176u,176u,176u,176u,175u,175u,175u,175u,175u,174u,174u,174u,174u,174u,174u,173u,173u,173u,173u,173u,172u,172u,172u,172u,172u,172u,171u,171u,171u,171u,171u,170u,170u,170u,170u,170u,169u,169u,169u,169u,169u,169u,168u,168u,168u,168u,168u,167u,167u,167u,167u,167u,167u,166u,166u,166u,166u,166u,165u,165u,165u,165u,165u,164u,164u,164u,164u,164u,164u,163u,163u,163u,163u,163u,162u,162u,162u,162u,162u,161u,161u,161u,161u,161u,160u,160u,160u,160u,160u,160u,159u,159u,159u,159u,159u,158u,158u,158u,158u,158u,157u,157u,157u,157u,157u,156u,156u,156u,156u,156u,156u,155u,155u,155u,155u,155u,154u,154u,154u,154u,154u,153u,153u,153u,153u,153u,152u,152u,152u,152u,152u,152u,151u,151u,151u,151u,151u,150u,150u,150u,150u,150u,149u,149u,149u,149u,149u,148u,148u,148u,148u,148u,147u,147u,147u,147u,147u,146u,146u,146u,146u,146u,146u,145u,145u,145u,145u,145u,144u,144u,144u,144u,144u,143u,143u,143u,143u,143u,142u,142u,142u,142u,142u,141u,141u,141u,141u,141u,140u,140u,140u,140u,140u,139u,139u,139u,139u,139u,138u,138u,138u,138u,138u,138u,137u,137u,137u,137u,137u,136u,136u,136u,136u,136u,135u,135u,135u,135u,135u,134u,134u,134u,134u,134u,133u,133u,133u,133u,133u,132u,132u,132u,132u,132u,131u,131u,131u,131u,131u,130u,130u,130u,130u,130u,129u,129u,129u,129u,129u,128u,128u,128u,128u,128u,128u,127u,127u,127u,127u,127u,126u,126u,126u,126u,126u,125u,125u,125u,125u,125u,124u,124u,124u,124u,124u,123u,123u,123u,123u,123u,122u,122u,122u,122u,122u,121u,121u,121u,121u,121u,120u,120u,120u,120u,120u,119u,119u,119u,119u,119u,118u,118u,118u,118u,118u,117u,117u,117u,117u,117u,117u,116u,116u,116u,116u,116u,115u,115u,115u,115u,115u,114u,114u,114u,114u,114u,113u,113u,113u,113u,113u,112u,112u,112u,112u,112u,111u,111u,111u,111u,111u,110u,110u,110u,110u,110u,109u,109u,109u,109u,109u,109u,108u,108u,108u,108u,108u,107u,107u,107u,107u,107u,106u,106u,106u,106u,106u,105u,105u,105u,105u,105u,104u,104u,104u,104u,104u,103u,103u,103u,103u,103u,103u,102u,102u,102u,102u,102u,101u,101u,101u,101u,101u,100u,100u,100u,100u,100u,99u,99u,99u,99u,99u,99u,98u,98u,98u,98u,98u,97u,97u,97u,97u,97u,96u,96u,96u,96u,96u,95u,95u,95u,95u,95u,95u,94u,94u,94u,94u,94u,93u,93u,93u,93u,93u,92u,92u,92u,92u,92u,91u,91u,91u,91u,91u,91u,90u,90u,90u,90u,90u,89u,89u,89u,89u,89u,88u,88u,88u,88u,88u,88u,87u,87u,87u,87u,87u,86u,86u,86u,86u,86u,86u,85u,85u,85u,85u,85u,84u,84u,84u,84u,84u,83u,83u,83u,83u,83u,83u,82u,82u,82u,82u,82u,81u,81u,81u,81u,81u,81u,80u,80u,80u,80u,80u,79u,79u,79u,79u,79u,79u,78u,78u,78u,78u,78u,77u,77u,77u,77u,77u,77u,76u,76u,76u,76u,76u,76u,75u,75u,75u,75u,75u,74u,74u,74u,74u,74u,74u,73u,73u,73u,73u,73u,73u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,64u,64u,64u,64u,64u,64u,63u,63u,63u,63u,63u,63u,62u,62u,62u,62u,62u,62u,61u,61u,61u,61u,61u,61u,60u,60u,60u,60u,60u,60u,59u,59u,59u,59u,59u,59u,58u,58u,58u,58u,58u,58u,57u,57u,57u,57u,57u,57u,56u,56u,56u,56u,56u,56u,55u,55u,55u,55u,55u,55u,55u,54u,54u,54u,54u,54u,54u,53u,53u,53u,53u,53u,53u,52u,52u,52u,52u,52u,52u,52u,51u,51u,51u,51u,51u,51u,50u,50u,50u,50u,50u,50u,49u,49u,49u,49u,49u,49u,49u,48u,48u,48u,48u,48u,48u,48u,47u,47u,47u,47u,47u,47u,46u,46u,46u,46u,46u,46u,46u,45u,45u,45u,45u,45u,45u,45u,44u,44u,44u,44u,44u,44u,44u,43u,43u,43u,43u,43u,43u,43u,42u,42u,42u,42u,42u,42u,42u,41u,41u,41u,41u,41u,41u,41u,40u,40u,40u,40u,40u,40u,40u,39u,39u,39u,39u,39u,39u,39u,38u,38u,38u,38u,38u,38u,38u,37u,37u,37u,37u,37u,37u,37u,37u,36u,36u,36u,36u,36u,36u,36u,35u,35u,35u,35u,35u,35u,35u,35u,34u,34u,34u,34u,34u,34u,34u,33u,33u,33u,33u,33u,33u,33u,33u,32u,32u,32u,32u,32u,32u,32u,32u,31u,31u,31u,31u,31u,31u,31u,31u,30u,30u,30u,30u,30u,30u,30u,30u,29u,29u,29u,29u,29u,29u,29u,29u,28u,28u,28u,28u,28u,28u,28u,28u,28u,27u,27u,27u,27u,27u,27u,27u,27u,26u,26u,26u,26u,26u,26u,26u,26u,26u,25u,25u,25u,25u,25u,25u,25u,25u,25u,24u,24u,24u,24u,24u,24u,24u,24u,24u,23u,23u,23u,23u,23u,23u,23u,23u,23u,22u,22u,22u,22u,22u,22u,22u,22u,22u,22u,21u,21u,21u,21u,21u,21u,21u,21u,21u,21u,20u,20u,20u,20u,20u,20u,20u,20u,20u,20u,19u,19u,19u,19u,19u,19u,19u,19u,19u,19u,18u,18u,18u,18u,18u,18u,18u,18u,18u,18u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,18u,18u,18u,18u,18u,18u,18u,18u,18u,18u,19u,19u,19u,19u,19u,19u,19u,19u,19u,19u,20u,20u,20u,20u,20u,20u,20u,20u,20u,20u,21u,21u,21u,21u,21u,21u,21u,21u,21u,21u,22u,22u,22u,22u,22u,22u,22u,22u,22u,22u,23u,23u,23u,23u,23u,23u,23u,23u,23u,24u,24u,24u,24u,24u,24u,24u,24u,24u,25u,25u,25u,25u,25u,25u,25u,25u,25u,26u,26u,26u,26u,26u,26u,26u,26u,26u,27u,27u,27u,27u,27u,27u,27u,27u,28u,28u,28u,28u,28u,28u,28u,28u,28u,29u,29u,29u,29u,29u,29u,29u,29u,30u,30u,30u,30u,30u,30u,30u,30u,31u,31u,31u,31u,31u,31u,31u,31u,32u,32u,32u,32u,32u,32u,32u,32u,33u,33u,33u,33u,33u,33u,33u,33u,34u,34u,34u,34u,34u,34u,34u,35u,35u,35u,35u,35u,35u,35u,35u,36u,36u,36u,36u,36u,36u,36u,37u,37u,37u,37u,37u,37u,37u,37u,38u,38u,38u,38u,38u,38u,38u,39u,39u,39u,39u,39u,39u,39u,40u,40u,40u,40u,40u,40u,40u,41u,41u,41u,41u,41u,41u,41u,42u,42u,42u,42u,42u,42u,42u,43u,43u,43u,43u,43u,43u,43u,44u,44u,44u,44u,44u,44u,44u,45u,45u,45u,45u,45u,45u,45u,46u,46u,46u,46u,46u,46u,46u,47u,47u,47u,47u,47u,47u,48u,48u,48u,48u,48u,48u,48u,49u,49u,49u,49u,49u,49u,49u,50u,50u,50u,50u,50u,50u,51u,51u,51u,51u,51u,51u,52u,52u,52u,52u,52u,52u,52u,53u,53u,53u,53u,53u,53u,54u,54u,54u,54u,54u,54u,55u,55u,55u,55u,55u,55u,55u,56u,56u,56u,56u,56u,56u,57u,57u,57u,57u,57u,57u,58u,58u,58u,58u,58u,58u,59u,59u,59u,59u,59u,59u,60u,60u,60u,60u,60u,60u,61u,61u,61u,61u,61u,61u,62u,62u,62u,62u,62u,62u,63u,63u,63u,63u,63u,63u,64u,64u,64u,64u,64u,64u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,74u,75u,75u,75u,75u,75u,76u,76u,76u,76u,76u,76u,77u,77u,77u,77u,77u,77u,78u,78u,78u,78u,78u,79u,79u,79u,79u,79u,79u,80u,80u,80u,80u,80u,81u,81u,81u,81u,81u,81u,82u,82u,82u,82u,82u,83u,83u,83u,83u,83u,83u,84u,84u,84u,84u,84u,85u,85u,85u,85u,85u,86u,86u,86u,86u,86u,86u,87u,87u,87u,87u,87u,88u,88u,88u,88u,88u,88u,89u,89u,89u,89u,89u,90u,90u,90u,90u,90u,91u,91u,91u,91u,91u,91u,92u,92u,92u,92u,92u,93u,93u,93u,93u,93u,94u,94u,94u,94u,94u,95u,95u,95u,95u,95u,95u,96u,96u,96u,96u,96u,97u,97u,97u,97u,97u,98u,98u,98u,98u,98u,99u,99u,99u,99u,99u,99u,100u,100u,100u,100u,100u,101u,101u,101u,101u,101u,102u,102u,102u,102u,102u,103u,103u,103u,103u,103u,103u,104u,104u,104u,104u,104u,105u,105u,105u,105u,105u,106u,106u,106u,106u,106u,107u,107u,107u,107u,107u,108u,108u,108u,108u,108u,109u,109u,109u,109u,109u,109u,110u,110u,110u,110u,110u,111u,111u,111u,111u,111u,112u,112u,112u,112u,112u,113u,113u,113u,113u,113u,114u,114u,114u,114u,114u,115u,115u,115u,115u,115u,116u,116u,116u,116u,116u,117u,117u,117u,117u,117u,117u,118u,118u,118u,118u,118u,119u,119u,119u,119u,119u,120u,120u,120u,120u,120u,121u,121u,121u,121u,121u,122u,122u,122u,122u,122u,123u,123u,123u,123u,123u,124u,124u,124u,124u,124u,125u,125u,125u,125u,125u,126u,126u,126u,126u,126u,127u,127u,127u,127u,127u };
const uint8 CYCODE generadorOnda_wave2[generadorOnda_WAVE2_LENGTH] = { 128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u };

static uint8  generadorOnda_Wave1Chan;
static uint8  generadorOnda_Wave2Chan;
static uint8  generadorOnda_Wave1TD;
static uint8  generadorOnda_Wave2TD;


/*******************************************************************************
* Function Name: generadorOnda_Init
********************************************************************************
*
* Summary:
*  Initializes component with parameters set in the customizer.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void generadorOnda_Init(void) 
{
	generadorOnda_VDAC8_Init();
	generadorOnda_VDAC8_SetSpeed(generadorOnda_HIGHSPEED);
	generadorOnda_VDAC8_SetRange(generadorOnda_DAC_RANGE);

	#if(generadorOnda_DAC_MODE == generadorOnda_CURRENT_MODE)
		generadorOnda_IDAC8_SetPolarity(generadorOnda_DAC_POL);
	#endif /* generadorOnda_DAC_MODE == generadorOnda_CURRENT_MODE */

	#if(generadorOnda_OUT_MODE == generadorOnda_BUFFER_MODE)
	   generadorOnda_BuffAmp_Init();
	#endif /* generadorOnda_OUT_MODE == generadorOnda_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	generadorOnda_Wave1TD = CyDmaTdAllocate();
	generadorOnda_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	generadorOnda_Wave1Setup(generadorOnda_wave1, generadorOnda_WAVE1_LENGTH) ;
	generadorOnda_Wave2Setup(generadorOnda_wave2, generadorOnda_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(generadorOnda_DacClk_PHASE)
	   generadorOnda_DacClk_SetPhase(generadorOnda_CLK_PHASE_0nS);
	#endif /* defined(generadorOnda_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: generadorOnda_Enable
********************************************************************************
*  
* Summary: 
*  Enables the DAC block and DMA operation.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void generadorOnda_Enable(void) 
{
	generadorOnda_VDAC8_Enable();

	#if(generadorOnda_OUT_MODE == generadorOnda_BUFFER_MODE)
	   generadorOnda_BuffAmp_Enable();
	#endif /* generadorOnda_OUT_MODE == generadorOnda_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(generadorOnda_Wave1Chan, 1u);
	(void)CyDmaChEnable(generadorOnda_Wave2Chan, 1u);
	
	/* set the initial value */
	generadorOnda_SetValue(0u);
	
	#if(generadorOnda_CLOCK_SRC == generadorOnda_CLOCK_INT)  	
	   generadorOnda_DacClk_Start();
	#endif /* generadorOnda_CLOCK_SRC == generadorOnda_CLOCK_INT */
}


/*******************************************************************************
* Function Name: generadorOnda_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as 
*  executing the stop function.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void generadorOnda_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(generadorOnda_initVar == 0u)
	{
		generadorOnda_Init();
		generadorOnda_initVar = 1u;
	}
	
	generadorOnda_Enable();
}


/*******************************************************************************
* Function Name: generadorOnda_StartEx
********************************************************************************
*
* Summary:
*  The StartEx function sets pointers and sizes for both waveforms
*  and then starts the component.
*
* Parameters:  
*   uint8 * wavePtr1:     Pointer to the waveform 1 array.
*   uint16  sampleSize1:  The amount of samples in the waveform 1.
*   uint8 * wavePtr2:     Pointer to the waveform 2 array.
*   uint16  sampleSize2:  The amount of samples in the waveform 2.
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void generadorOnda_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	generadorOnda_Wave1Setup(wavePtr1, sampleSize1);
	generadorOnda_Wave2Setup(wavePtr2, sampleSize2);
	generadorOnda_Start();
}


/*******************************************************************************
* Function Name: generadorOnda_Stop
********************************************************************************
*
* Summary:
*  Stops the clock (if internal), disables the DMA channels
*  and powers down the DAC.
*
* Parameters:  
*  None  
*
* Return: 
*  None
*
*******************************************************************************/
void generadorOnda_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(generadorOnda_CLOCK_SRC == generadorOnda_CLOCK_INT)  	
	   generadorOnda_DacClk_Stop();
	#endif /* generadorOnda_CLOCK_SRC == generadorOnda_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(generadorOnda_Wave1Chan);
	(void)CyDmaChDisable(generadorOnda_Wave2Chan);

	/* Disable power to DAC */
	generadorOnda_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: generadorOnda_Wave1Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 1.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None 
*
*******************************************************************************/
void generadorOnda_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (generadorOnda_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		generadorOnda_Wave1Chan = generadorOnda_Wave1_DMA_DmaInitialize(
		generadorOnda_Wave1_DMA_BYTES_PER_BURST, generadorOnda_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		generadorOnda_Wave1Chan = generadorOnda_Wave1_DMA_DmaInitialize(
		generadorOnda_Wave1_DMA_BYTES_PER_BURST, generadorOnda_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(generadorOnda_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(generadorOnda_Wave1TD, sampleSize, generadorOnda_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)generadorOnda_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(generadorOnda_Wave1TD, LO16((uint32)wavePtr), LO16(generadorOnda_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(generadorOnda_Wave1Chan, generadorOnda_Wave1TD);
}


/*******************************************************************************
* Function Name: generadorOnda_Wave2Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 2.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None
*
*******************************************************************************/
void generadorOnda_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (generadorOnda_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		generadorOnda_Wave2Chan = generadorOnda_Wave2_DMA_DmaInitialize(
		generadorOnda_Wave2_DMA_BYTES_PER_BURST, generadorOnda_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		generadorOnda_Wave2Chan = generadorOnda_Wave2_DMA_DmaInitialize(
		generadorOnda_Wave2_DMA_BYTES_PER_BURST, generadorOnda_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(generadorOnda_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(generadorOnda_Wave2TD, sampleSize, generadorOnda_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)generadorOnda_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(generadorOnda_Wave2TD, LO16((uint32)wavePtr), LO16(generadorOnda_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(generadorOnda_Wave2Chan, generadorOnda_Wave2TD);
}


/* [] END OF FILE */
