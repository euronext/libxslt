/*
 * key.h: interface for the key matching used in template matches.
 *
 * See Copyright for the status of this software.
 *
 * Daniel.Veillard@imag.fr
 */

#ifndef __XML_XSLT_KEY_H__
#define __XML_XSLT_KEY_H__

#include "libxml/xpath.h"
#include "xsltInternals.h"

#ifdef __cplusplus
extern "C" {
#endif

int		xsltAddKey		(xsltStylesheetPtr style,
					 const xmlChar *name,
					 const xmlChar *nameURI,
					 const xmlChar *match,
					 const xmlChar *use);
xmlNodeSetPtr	xsltGetKey		(xsltTransformContextPtr ctxt,
					 const xmlChar *name,
					 const xmlChar *nameURI,
					 const xmlChar *value);
void		xsltInitCtxtKeys	(xsltTransformContextPtr ctxt);
void		xsltFreeKeys		(xsltStylesheetPtr style);
void		xsltFreeCtxtKeys	(xsltTransformContextPtr ctxt);
#ifdef __cplusplus
}
#endif

#endif /* __XML_XSLT_H__ */
