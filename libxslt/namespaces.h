/*
 * namespaces.h: interface for the XSLT namespace handling
 *
 * See Copyright for the status of this software.
 *
 * Daniel.Veillard@imag.fr
 */

#ifndef __XML_XSLT_NAMESPACES_H__
#define __XML_XSLT_NAMESPACES_H__

#include <libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif

void		xsltNamespaceAlias	(xsltStylesheetPtr style,
					 xmlNodePtr node);
xmlNsPtr	xsltGetNamespace	(xsltTransformContextPtr ctxt,
					 xmlNodePtr cur,
					 xmlNsPtr ns,
					 xmlNodePtr out);
xmlNsPtr	xsltCopyNamespaceList	(xsltTransformContextPtr ctxt,
					 xmlNodePtr node,
					 xmlNsPtr cur);
#ifdef __cplusplus
}
#endif

#endif /* __XML_XSLT_NAMESPACES_H__ */
